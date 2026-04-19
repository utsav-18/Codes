#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Enter an odd size (>= 5): ";
	cin >> n;

	if (n < 5 || n % 2 == 0) {
		cout << "Please enter an odd number greater than or equal to 5.\n";
		return 0;
	}

	int mid = n / 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == mid || j == mid || i == j || i + j == n - 1) {
				cout << "* ";
			} else {
				cout << "  ";
			}
		}
		cout << "\n";
	}

	return 0;
}
