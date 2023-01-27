#include <iostream>
#include <string>
#include <map>

using namespace std;

 int main() {
    map<string, string> sounds = { {"cat"s, "meow"s},
                                        {"dog"s, "bark"s},
                                        {"cow"s, "moo"s},
                                        {"owl"s, "hoot"s},
                                        {"tiger"s, "roar"s} };
   
    for (const auto& [key, value] : sounds) {
        cout << key << ' ' << value << endl;
    }
    cout << "========" << endl;

    map<string, string> sounds2;
    for (const auto& [key, value] : sounds) {
        sounds2.insert({value,key});
     }

    for (const auto& [key, value] : sounds2) {
        cout << key << ' ' << value << endl;
    }

}
