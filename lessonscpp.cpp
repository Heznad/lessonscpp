#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
vector<int> elements = { 1,6,828,-48,99,135,-7 };
for (int i = 0; i < elements.size(); i++) {
	for (int g = i+1; g < elements.size(); g++) {
		if (elements[g] < elements[i]) {
			int n = elements[i];
			elements[i] = elements[g];
			elements[g] = n;
		}
	}
}
for (int value : elements) {
	cout << value << ' ';
}
return 0;
}