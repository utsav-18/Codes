#include <iostream>
using namespace std;

string reverseWords(string s) {
        int size = s.length() - 1;
        string ans = "";

        int idx = size;

        for (int i = size; i >= 0; i--) {

            while (idx >= 0 && s[idx] == ' ')
                idx--;

            if (idx < 0)
                break;

            i = idx;     

            while (idx >= 0 && s[idx] != ' ')
                idx--;

            int k = idx + 1;
            while (k <= i) {
                ans += s[k++];
            }

            while (idx >= 0 && s[idx] == ' ')
                idx--;

            if (idx >= 0)
                ans += ' ';

            i = idx + 1;   
        }

        return ans;
    }

    int main(){
        string s = "the sky is blue";
        cout<<reverseWords(s);
    }