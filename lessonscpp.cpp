#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*Задание
Задание написать методы begin, cbegin, end, cend. Проверить на цикле for
cbegin - возвращает константный итератор (указатель)*/

class Massive {
public:

    using ptr = int*;

    Massive(int volume) {
        size = volume;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    Massive(int volume, int b) {
        size = volume;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = b;
        }
    }

    ~Massive() {
        delete[] arr;
    }

    void EditElement() {
        for (int i = 0; i < size; ++i) {
            cout << "Vvedite novii element: ";
            int b = 0;
            cin >> b;
            arr[i] = b;
        }

    }

    int Size() const{
        return size;
    }

    ptr begin() {
        return arr;
    }

    ptr cbegin() const {
        return arr;
    }

    ptr end() {
        return arr + size;
    }

    ptr cend() const {
        return arr + size;
    }

    int& operator[](int i) {
        return arr[i];
    }

    const int& operator[](int i) const {
        return arr[i];
    }

private:
    int* arr;
    int size;
};

ostream& operator<<(ostream& out, const Massive& mas) {
    for (int i = 0; i < mas.Size(); ++i) {
        out << mas[i] << ' ';
    }
    return out;
}

int main() {
    /*int size = 0;
    cout << "Enter size array: ";
    cin >> size;
    Massive mas(size);
    mas.EditElement();
    cout << mas << endl;
    Massive mas1(size, 10);
    cout << mas1 << endl;*/
    Massive mas(3);
    mas.EditElement();
    cout << mas << endl;
    reverse(mas.begin(), mas.end());
    for (int value : mas) {
        cout << value << ' ';
    }
    cout << endl;
    return 0;
}