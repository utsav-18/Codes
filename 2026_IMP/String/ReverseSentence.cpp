#include <iostream>
using namespace std;

string reverseWords(string s) {
    string ans = "";
    int i = s.length() - 1;

    while (i >= 0) {

        while (i >= 0 && s[i] == ' ')
            i--;

        if (i < 0)
            break;

        int j = i;

        while (j >= 0 && s[j] != ' ')
            j--;

        ans += s.substr(j + 1, i - j);

        if (j > 0)
            ans += ' ';

        i = j - 1;
    }

    return ans;
}

    int main(){
        string s = "the sky is blue";
        cout<<reverseWords(s);
    }