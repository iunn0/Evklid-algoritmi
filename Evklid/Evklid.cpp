#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getTwoNumbers() {
	vector<int> result = { 0, 0 };
	int q;

	for (int i = 0; i < result.size(); i++) {
		cout << "Enter " << i + 1 << " number" << endl;
		cin >> q;
		result[i] = q;
	}

	return result;
}


void checker(int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	cout << "GCD is " << a + b;
}

int main() {
	int x, y;
	vector<int> nums = getTwoNumbers();

	x = nums[0];
	y = nums[1];

	checker(x, y);

	return 0;
}