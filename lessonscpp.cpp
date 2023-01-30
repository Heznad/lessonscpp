#include <iostream>
#include <vector>
#include <cassert>

using namespace std;



void Sum(vector<int>& elements) {
	if (elements.empty()) {
		cout << "Котейнер пуст" << endl;
		return ;
	}

	int sum = 0;
	for (int& value : elements) {
		if (value > 0) {
			sum = sum + value;
		}
	}
	if (sum != 0) {
		elements.push_back(sum);
	}
}
void Test() {
	{
		vector<int> input = { 5,2,52 };
		vector<int> etalon = { 5,2,52,59 };
		Sum(input);
		assert(input == etalon);
	}
	{
		vector<int> input;
		Sum(input);
		assert(input.empty());
	}
	{
		vector<int> input = { -5,-2,-52 };
		vector<int> etalon = input;
		Sum(input);
		assert(input == etalon);
	}
	cout << "All test passed" << endl;
}

int main() {
	setlocale(LC_ALL, "ru");
	Test();
	return 0;
}