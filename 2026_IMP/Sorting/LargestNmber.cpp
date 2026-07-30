#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static bool cmp(string &a, string &b){
    return a+b > b+a;
}

string largestNumber(vector<int>& nums) {

    vector<string> str;
    for(int num: nums) str.push_back(to_string(num));

    sort(str.begin(),str.end(),cmp);

    if(str[0]=="0") return "0";

    string ans="";
    for(string &s : str) ans += s;

    return ans;

}

int main(){

    vector<int>v={10,2};

    cout<<largestNumber(v);

}