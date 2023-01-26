#include <iostream>
#include <vector>
#include <map>


using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // название животного, количество ног
    map<string, int> animals = {
        {"собака"s, 4},
        {"попугай"s, 2},
        {"слон"s, 4},
        {"кенгуру"s, 2},
        {"многоножка"s, 100},
        {"червяк"s, 0}
    };
   /* animals.erase("собака"); */
    animals["собака"] = 6;
    animals.insert({ "кот", 4 });
    animals.insert(make_pair("лошадь", 4));
    for (const auto& [key, value]: animals) {
        if (value == 4) {
            cout << key << ' ' << value << endl;
        }
    }
}