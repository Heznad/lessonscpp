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
    int size = 0;
    cout << "Enter size array: ";
    cin >> size;
    Massive mas(size);
    mas.EditElement();
    cout << mas << endl;
    Massive mas1(size, 10);
    cout << mas1 << endl;
    return 0;
}