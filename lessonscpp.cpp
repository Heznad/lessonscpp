#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

//Задача - считать из созданного файла все строки.Решить где их хранить после считывания(внутри программы)

int main() {

	ifstream file("text.txt");
	if (!file.is_open()) {
		cout << "File is not open!" << endl;
		return 0;
	}
	vector<string> stroki;
	string c;

	while (!file.eof()) {
		getline (file,c);
		stroki.push_back(c);
	}
	for (string value : stroki) {
		cout << value << endl;
	}

	file.close();

	return 0;
}