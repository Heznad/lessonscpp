#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Задание
Написать конструкторы:
1) который будет инициализировать наш массив значениями по умолчанию 
2) который будет инициализировать наш массив заданным значением
3) написать метод вывода значений в консоль
vector<int> a(5)*/

class Massive {
public:

    Massive(const int& volume) {
        size = volume;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    Massive(const int& volume,const int& b) {
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

    void Vivod() {
        cout << "Massive: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }

private:
    int* arr;
    int size;
};

int main() {
    int size = 0;
    cout << "Enter size array: ";
    cin >> size;
    Massive mas(size);
    mas.EditElement();
    mas.Vivod();
    Massive mas1(size, 10);
    mas1.Vivod();
    return 0;
}