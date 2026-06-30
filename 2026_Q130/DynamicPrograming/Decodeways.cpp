#include <iostream>
#include <string>
#include <vector>
using namespace std;


    int numDecodings(string s) {
        if (s[0] == '0')
            return 0;

        int one = 1;
        int two = 1;

        for (int i = 1; i < s.size(); i++) {
            int current = 0;

            // Decode single digit
            if (s[i] != '0') {
                current = one;
            }

            // Decode two digits
            int value = (s[i - 1] - '0') * 10 + (s[i] - '0');

            if (value >= 10 && value <= 26) {
                current += two;
            }

            two = one;
            one = current;
        }

        return one;
    }


int main() {


    string s = "226";

    cout << numDecodings(s);

    return 0;
}