#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void TestVector(vector<int> elements) {
	vector<int> etalon{ 1,-2,-3,4,5,-6,7,-8,9,10,36 };
	assert(elements == etalon);
}

int Sum(vector<int>& elements) {
	if (elements.empty()) {
		cout << "Котейнер пуст" << endl;
		return 0;
	}

	int sum = 0;
	for (int& value : elements) {
		if (value > 0) {
			sum = sum + value;
		}
	}
	elements.insert(elements.end(), sum);
	TestVector(elements);
	return sum;
}



void Square(int& a, int& b) {
	b = (b + a) * (b + a);
}
 
void TestStroki(string text) {
	string etalon = "MyNameVitalya";
	assert(text == etalon);
}

string BezProbelov(string text) {

	text.erase(remove(text.begin(), text.end(), ' '), text.end());
	TestStroki(text);
	return text;
}

int main() {

	setlocale(LC_ALL, "ru");
	cout << "===========================================" << endl;

	/* #1 Написать функцию вычисления суммы всех положительных элементов вектора.
Результат дописать в конец вектора.В main вывести последний элемент вектора(результат суммы).
Написать тесты для этой функции */

	vector<int> elements{ 1,-2,-3,4,5,-6,7,-8,9,10 };
	cout << "Контейнер без изменений = ";
	for (const int& value : elements) {
		cout << value << ' ';
	}
	cout << endl;
	cout << "Сумма положительныз чисел = " << Sum(elements) << endl;
	cout << "Добавлен элемент суммы всех положительных чисел = ";
	for (const int value : elements) {
		cout << value << ' ';
	}
	cout << endl;

	cout << "===========================================" << endl;
	
	/* #2 Внутри функции посчитать квадрат суммы двух чисел.
Функция ничего не должна возвращать.
Результат вычисления записать во вторую переменную.
Вывести результат в main.Тесты к этой функции не обязательны */

	int a = 5;
	int b = 10;
	Square(a, b);
	cout << "Квадрат суммы a и b = " << b << endl;

	cout << "===========================================" << endl;

	/* #3 Написать функцию удаления из строки пробелов.
Функция должна возвращать строку без пробелов.Написать тесты.
Пример: "Hello world" = > "Helloworld" */

	string text = "My Name Vitalya";
	cout << "С пробелами = " << text << endl;
	cout << "Без пробелов = " << BezProbelov(text) << endl;

	return 0;
}