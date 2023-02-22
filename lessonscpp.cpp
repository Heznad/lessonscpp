#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int const size = 3;
	int arr[size][size] = {
		{2,5,0},
		{7,-2,10},
		{5,6,20}
	};
	cout << "Матрица:\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	int sump = 0;
	int sumpu = 0;
	int sumpd = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i + j == size - 1) {
				sump += arr[i][j];
			}
			if (i < size - 1 - j) {
				sumpu += arr[i][j];
			}
			if (i > size - 1 - j) {
				sumpd += arr[i][j];
			}
		}
	}
	cout << "Сумма элементов побочной диагонали:\t"<< sump << "\nСумма элементов над побочной диагональю:\t"<<sumpu<<"\nСумма под побочной диагональю:\t"<<sumpd<<endl;
}
