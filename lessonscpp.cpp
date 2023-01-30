#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


//string BezProbelov(string text) {
//	text.erase(remove(text.begin(), text.end(), ' '), text.end());
//	return text;
//}

string BezProbel(const string& text) {
	string result;
	for (int i = 0; i < text.size(); i++) {
		if (text[i] != ' ') {
			result.push_back(text[i]);
		}
	}
	return result;
}

void Test() {
	{
		string text = "My Name Vitalya";
		string etalon = "MyNameVitalya";
		assert(BezProbel(text) == etalon);
	}
	{
		string text;
		assert(BezProbel(text).empty() );
	}
	{
		string text = "Hello";
		assert(BezProbel(text) == text);
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	Test();
/* #3 Написать функцию удаления из строки пробелов.
Функция должна возвращать строку без пробелов.Написать тесты.
Пример: "Hello world" = > "Helloworld" */

	string text = "My Name Vitalya";
	cout << "С пробелами = " << text << endl;
	cout << "Без пробелов = " << BezProbel(text) << endl;
	return 0;
}