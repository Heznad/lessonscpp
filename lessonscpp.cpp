#include <iostream>
#include <vector>

using namespace std;

// int - тип возвращаемого значения (то, что поле return)
// Sum - название Функции
// int a, int b - принимаемые функцией переменные
int Sum(int first, int second) {
    int result = first + second;
    return result;
}

int MinElement(vector<int> elements) {
    if (elements.empty()) {
        return 0;
    }
    int min = elements[0];
    for (int value : elements) {
        if (min > value) {
            min = value;
        }
    }
    return min;
}

void Print(int printed) {
    cout << printed << endl;
}

int main() {
    vector<int> elements{25, 72, -1, 100};
    cout << MinElement(elements)<< endl;
    //int a = 2;
    //int b = 3;
    //int c = Sum(a, b);
    //Print(c);
    return 0;
}