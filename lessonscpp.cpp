#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

//Задача: слова, начинающиеся с маленькой буквы выводить в консоль, а с большой - в файл

int main() {
	vector <string> text = { "Yellow", "red", "Green", "Pueple", "blue", "black", "White" };
	string name_file = "text.txt"s;
	ofstream fout;
	fout.open(name_file);

	for (string value: text){
		if (isupper(value[0])) {
			fout << value << endl;
		}
		else {
			cout << value << endl;
		}
	}

	fout.close();
	return 0;
}