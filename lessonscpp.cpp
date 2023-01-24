//Задание
//Дан произвольный вектор целых чисел, например{ 6, 623, 2175, -21, 634, 88, 2, 9, -100, 20, 0 }. 
// Найти максимальный и минимальный элементы этого вектора и их позиции.Вывести результат в консоль следующим образом :
//Max element = 2175, pos = 2
//Min element = -100, pos = 8

#include <iostream>
#include <vector>

using namespace std;


int main() {
    int min= 2147483647;
    int max = -2147483647;
    int pos = 0;
    vector<int> elements = { 6, 623, 2175, -21, 634, 88, 2, 9, -100, 20, 0 };

    for (int value : elements) {
        if (value > max) {
            max = value;
        };
    };
    for (int i = 0; i < elements.size(); i++) {
        if (elements[i] == max) {
            pos = i;
            break;
        }
    }
    cout << "Max element = " << max << ", pos = " << pos << endl;

    for (int value : elements) {
        if (value < min) {
            min = value;
        };
    };
    for (int i = 0; i < elements.size(); i++) {
        if (elements[i] == min) {
            pos = i;
            break;
        }
    }
    cout <<"Min element = "<< min << ", pos = " << pos << endl;

    return 0;
}