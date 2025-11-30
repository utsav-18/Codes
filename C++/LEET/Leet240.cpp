#include <iostream>
#include <vector>
using namespace std;

int main() {
    int matrix[5][5] = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}
    };

    int t;cout<<"Enter Target value: ";cin>>t; // Target value to search for
    int rows = 5;
    int cols = 5;
    int i = 0;
    int j = cols - 1;
    bool found = false; // Using a boolean flag to indicate if the target is found

    while (i<=rows-1 && j>=0) {
        if (matrix[i][j] == t) {
            found = true;
            break; // Exit the loop as soon as we find the target
        }
        else if (matrix[i][j] > t) {
            j--; // Move left
        }
        else {
            i++; // Move down
        }
    }

    if (found) 
        cout << "Found";
    else 
        cout << "Not Found";

    return 0;
}