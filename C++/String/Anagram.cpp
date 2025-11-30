#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    string s1="UtsavRaj";
    string s2="RajUtsav";
    //we have to check they have same elements or not;

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){cout<<"YES";}
    else {cout<<"NO";}

}