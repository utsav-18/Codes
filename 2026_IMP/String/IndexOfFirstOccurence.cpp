#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
    for(int idx = 0;idx<=n-m;idx++){
        int i = idx;
        int j=0;
        while(j<m && haystack[i]==needle[j]){
            i++;
            j++;
        }
        if(j==m) return idx;
    }
    return -1;

}

int main(){
string h = "butsad";
string n = "sad";
cout<<strStr(h,n);
}