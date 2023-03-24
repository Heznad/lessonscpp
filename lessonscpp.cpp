#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*Задание
Добавить поле "capacity". Написать метод Resize в меньшую и большую сторону*/

class Massive {
public:

    using ptr = int*;

    Massive(int volume) {
        size = volume;
        capacity = size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = 0;
        }
    }

    Massive(int volume, int b) {
        size = volume;
        capacity = size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = b;
        }
    }

    Massive(const Massive& mas) {
        size = mas.Size();
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = mas[i];
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

    void Resize(int volume) {
        if (size > volume) {
            for (int i = size-1; i > volume; --i) {
                arr[i] = 0;
            }
        }
        if (size < volume) {
            if (volume > capacity) {
                capacity = max(size, capacity) * 2;
            }
            int* arr2 = new int[capacity];
            for (int i = 0; i < size; ++i) {
                arr2[i] = arr[i];
            }
            for (int i = size; i < capacity; ++i) {
                arr2[i] = 0;
            }
            swap(arr, arr2);
            delete[] arr2;
        }
        size = volume;
    }

    int GetCapacity() {
        return capacity;
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
    int size = 0;
    int capacity = 0;
};

ostream& operator<<(ostream& out, const Massive& mas) {
    for (int i = 0; i < mas.Size(); ++i) {
        out << mas[i] << ' ';
    }
    return out;
}

int main() {
   /* int size = 0;
    cout << "Enter size array: ";
    cin >> size;
    Massive mas(size);
    mas.EditElement();
    cout << mas << endl;
    Massive mas1(size, 10);
    cout << mas1 << endl;
    Massive mas(3);
    mas.EditElement();
    cout << mas << endl;
    reverse(mas.begin(), mas.end());
    for (int value : mas) {
        cout << value << ' ';
    }
    cout << endl;
    Massive cop(mas);
    cout << cop << endl;*/

    /*vector<int> a(5, 5);
    for (int v : a) {
        cout << v << ' ';
    }
    cout << endl;
    cout << a.capacity() << endl;
    a.resize(10);
    for (int v : a) {
        cout << v << ' ';
    }
    cout << endl;
    cout << a.capacity() << endl;
    a.resize(3);
    for (int v : a) {
        cout << v << ' ';
    }
    cout << a.capacity() << endl;*/

    Massive mas(5, 5);
    cout << mas.GetCapacity() << endl;
    cout << mas << endl;
    mas.Resize(10);
    cout << "Cap = "<<mas.GetCapacity() << endl;
    cout << mas << endl;
    mas.Resize(3);
    cout << "Cap = " << mas.GetCapacity() << endl;
    cout << mas << endl;
    mas.Resize(4);
    cout << "Cap = " << mas.GetCapacity() << endl;
    cout << mas << endl;
    mas.Resize(5);
    cout << "Cap = " << mas.GetCapacity() << endl;
    cout << mas << endl;
    return 0;
    
}