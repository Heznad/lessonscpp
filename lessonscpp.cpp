#include <iostream>

using namespace std;


double** AllocationMemory(int str,int col)  {
    double** arr = new double* [str];
    for (int i = 0; i < str; ++i) {
        arr[i] = new double[col];
    }
    return arr;
}

void FreeMemory(double** arr, int str) {
    for (int i = 0; i < str; ++i) {
        delete[] arr[i];
    }
}

int main() {
    int str, col;
    cout << "Vvedite kolichestvo strochek: ";
    cin >> str;
    cout << "Vvedite kolichestvo colonok: ";
    cin >> col;
    double** arr = AllocationMemory(str, col);
    for (int i = 0; i < str; ++i) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = 6.5;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    FreeMemory(arr, str);
    return 0;
}