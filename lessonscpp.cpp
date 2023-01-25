
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> elem = { -2,5,0,3,5,-2 };
    set<int> elements(elem.begin(), elem.end());
    for (int value : elements) {
        cout << value << ' ';
        }

    return 0;
}