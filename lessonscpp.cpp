#include <iostream>

using namespace std;

int main() {

	/*1) Создать указатель на эту переменную и прибавить к ней 5 через указатель,
не обращаясь к её имени напрямую.Т.е.нельзя написать value += 5. Нужно взаимодействие с указателем.*/

	double a = 9.58;
	double* ukaz_a = &a;
	*ukaz_a += 5;
	cout << " a = " << *ukaz_a << endl;

	cout << "=========================================" << endl;

	/*2) Создать ссылку на переменную и через ссылку умножить переменную на - 1*/

	double& ssilka_a = a;
	ssilka_a = ssilka_a * (-1);
	cout << " a = " << ssilka_a << endl;

	return 0; 
}