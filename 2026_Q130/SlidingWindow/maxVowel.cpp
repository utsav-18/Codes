#include <iostream>
#include <vector>
using namespace std;


    int maxVowels(string s, int k) {

        int mv = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u')
                mv++;
        }

        int maxmv = mv;
        int left = 0;

        for (int right = k; right < s.length(); right++) {

            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                s[left] == 'o' || s[left] == 'u')
                mv--;

            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                s[right] == 'o' || s[right] == 'u')
                mv++;

            left++;

            maxmv = max(maxmv, mv);
        }

        return maxmv;
    }

int main() {
    cout<<maxVowels("abciiidef",3);
}