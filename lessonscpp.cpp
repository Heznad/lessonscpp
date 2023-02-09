#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> Parcing(string& str) {
	vector<string> str1;
	string b;
	str += " ";
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			b += str[i];
		}
		else{
			str1.push_back(b);
			b.clear();
		}
	}
	return str1;
}

int main() {
	string str = "vd0 ,s.l 8r5f isvbd privet  poka";
	for (string value : Parcing(str)) {
		cout << value << '\n';
	}

	cout << "======================" << endl;

	string str1 = " ";
	for (string value : Parcing(str1)) {
		cout << value << '\n';
	}

	cout << "======================" << endl;

	string str2 = "b";
	for (string value : Parcing(str2)) {
		cout << value << '\n';
	}

	return 0;
}