//sorted order of keys
#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string>m;
    m[2] = "Utsav";
    m[1] = "Anshu";
    m[3] = "Raj";

    for(auto i : m ){
        cout<<i.first <<" - "<<i.second<<endl;
    }

}