#include <iostream>

using namespace std;

int main() {
	int const size = 3;
	int arr[size][size] = {
		{2,5,0},
		{7,-2,10},
		{5,6,20}
	};
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}
	cout << sum << endl;
}
	