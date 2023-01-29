#include <iostream>
#include <vector>

using namespace std;

//Задание. Четные позиции вектора занулить

void ObnulChet(vector<int>& vector) {
	for (int i = 0; i < vector.size();i++) {
		if (i % 2 == 0) {
			vector[i] = 0;
		}
	}
}

void Print(const vector<int>& elements) {
	for (const int& value : elements) {
		cout << value << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> vector{ 7,4,19,32,0,47,87,0,-12,523,-61,20 };
	cout << "before" << endl;
	Print(vector);
	cout << "after" << endl;
	ObnulChet(vector);
	Print(vector);
	return 0;
}