#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	const int totalColumns = 50;
	const int patternWidth = 6;
	const int patternHeight = 4;
	const int delayMs = 80;

	int position = 0;
	int direction = 1;

	// Infinite loop to animate a moving star block.
	while (true) {
		system("cls");

		for (int row = 0; row < patternHeight; row++) {
			for (int col = 0; col < totalColumns; col++) {
				if (col >= position && col < position + patternWidth) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
			cout << "\n";
		}

		Sleep(delayMs);

		position += direction;

		if (position <= 0 || position + patternWidth >= totalColumns) {
			direction *= -1;
		}
	}

	return 0;
}
