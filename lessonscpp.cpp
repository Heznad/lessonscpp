#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<string> Parcing(const string& str) {
	vector<string> str1;
	if (str.empty()) {
		return str1;
	}
	string b;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			b += str[i];
		}
		else{
			str1.push_back(b);
			b.clear();
		}
	}
	if (!b.empty()) {
		str1.push_back(b);
	}
	return str1;
}

void Test() {
	{
		string text = "First"s;
		vector<string> result = { "First"s };
		assert(Parcing(text) == result);
	}
	{
		string text = "Hello Google my name is Boba I am coder c++"s;
		vector<string> result = { "Hello"s, "Google"s, "my"s, "name"s, "is"s, "Boba"s, "I"s, "am"s, "coder"s, "c++"s };
		assert(Parcing(text) == result);
	}
	{
		string text;
		vector<string> result = Parcing(text);
		assert(result.empty());
	}
}

int main() {
	Test();
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