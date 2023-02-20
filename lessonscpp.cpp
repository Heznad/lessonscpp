#include <iostream>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	vector<int> elements = { 2, 4, 9, -5, 10, 6, 4 };
	vector<int> before;
	
	vector<int>::const_iterator it = elements.begin();
	vector<int>::const_iterator it_end = elements.end();


	while (*it >= 0) {
		before.push_back(*++it);
	}
	vector<int> after(it+1, it_end);

	cout << "до" << endl;

	for (int const value : before) {
		cout << value << "\t";
	}

	cout << endl;

	cout << "после" << endl;

	for (int const value : after) {
			cout << value << "\t";
	}
	
}