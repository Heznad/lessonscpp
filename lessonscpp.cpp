#include <iostream>

using namespace std;

int main() {
    int size = 0;
    cout << "Enter size array: ";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }

    return 0;
}