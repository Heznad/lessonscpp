#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

double SredArifm(vector<double> elements) {
	if (elements.empty()) {
		cout << "Контейнер пуст." << endl;
		return 0;
	}
	int i = 0;
	double sum = 0;
	for (double value : elements) {
		i++;
		sum = sum+value;
	}
	double sredarifm = sum / i;
	return sredarifm;
}

map<string, string> Swap(map<string, string> changepos) {
	map<string, string> noise;
	for (const auto& [key, value] : changepos) {
		noise.insert({ value,key });
	}
	return noise;
}

set<int> PologElementi(vector<int>elements) {
	set<int> elem;
	for (int value : elements) {
		if (value > 0) {
			elem.insert(value);
		}
	}
	return elem;
}

int main() {

	setlocale(LC_ALL, "ru");
	
	/* #1 Написать функцию, вычисляющую среднее арифметическое элементов вектора.
Элементы вектора - вещественные числа.*/

	vector<double> elements{ 85.6, 32.2, 97.001, 437, 105, 27 };
	cout<< SredArifm(elements)<<endl;

	cout << "=============================================" << endl;

	/* #2 Оформить в виде функции решенную задачу о замене ключей и значений map. */

	map<string, string > sounds = { {"cat"s, "meow"s},
										{"dog"s, "bark"s},
										{"cow"s, "moo"s},
										{"owl"s, "hoot"s},
										{"tiger"s, "roar"s} };
	
	//map<string,string>noise = Swap(sounds);
	for (const auto&[key,value] : Swap(sounds)) {
		cout << key << ' ' << value << endl;
	}
	
	cout << "=============================================" << endl;

	/* #3 Написать функцию, возвращающую все положительные элементы вектора без повторов*/

	vector<int> elem = { 5,90,-232,54,23,5,23,1,90,-65 };

	set<int>ele = PologElementi(elem);
	for (int value : ele ) {
		cout << value << endl;
	}

	return 0;
}