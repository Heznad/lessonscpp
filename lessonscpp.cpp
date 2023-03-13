#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Задание
Написать класс - обертку на динамический массив.
Чтобы мы не боялись утечки памяти и могли пользоваться этим массивом как вектором
Динамический массив одномерный*/

class Massive {
public:

    Massive(int volume) {
        size = volume;
        arr = new int [size];
    }

    ~Massive() {
        delete[] arr;
    }

    void EditElement(const int& i) {
        cout << "Vvedite novii element: ";
        int b = 0;
        cin >> b;
        arr[i] = b;
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
    for (int i = 0; i < size; ++i) {
        mas.EditElement(i);
    };
    cout << endl;
    return 0;

}