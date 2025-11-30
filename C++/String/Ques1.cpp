//number of times the neighbouring elements are same;

#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;cout<<"Write: ";cin>>s;
    int count=0;
    int n=s.size();

    for(int i=0;s[i]!='\0';i++){
        if(n==1){break;}

        else if(i==0){if(s[i+1]!=s[i])count++;}

        else if(i==n-1){if(s[i-1]!=s[i])count++;}

        else if(s[i+1]!=s[i] && s[i-1]!=s[i]){count++;}

    }

    cout<<count;
}