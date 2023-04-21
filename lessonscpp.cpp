#include <iostream>
#include <Windows.h>
#include <cassert>
using namespace std;

int ChisloFibonachchi(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    //cout << n << " + " << n - 1 << endl;
    return ChisloFibonachchi(n - 1) + ChisloFibonachchi(n - 2);
}

uint64_t ChisloFibonachchiCycle(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    uint64_t f1 = 0, f2 = 1, res = 0;
    for (uint64_t i = 2; i < n + 1; ++i) {
        res = f1 + f2;
        f1 = f2;
        f2 = res;
    }
    return res;
}

void Test() {
    assert(ChisloFibonachchi(2) == 1);
    assert(ChisloFibonachchiCycle(6) == 8);
}

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Test();
    cout << "Числа Фиббоначчи" << endl;
    {
        clock_t start = clock();
        cout << ChisloFibonachchiCycle(100) << endl;
        clock_t end = clock();
        cout << "Время выполения цикла: " << (double)(end - start) << " mls" << endl;
    }
    
   /* {
        clock_t start = clock();
        cout << ChisloFibonachchi(30) << endl;
        clock_t end = clock();
        cout << "Время выполения рекурсия: " << (double)(end - start) << " mls" << endl;
    }*/
}