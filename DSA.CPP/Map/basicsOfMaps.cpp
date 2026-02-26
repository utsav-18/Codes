#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map<string,int> m;
    
    pair<string,int>p1;
    p1.first = "Utsav";
    p1.second = 22;

    pair<string,int>p2;
    p2.first = "Aman";
    p2.second = 22;

    pair<string,int>p3;
    p3.first = "Raj";
    p3.second = 22;

    //another way:

    m["Supriya"] = 21;
    m["Payal"] = 19;
    m["Guddu"] = 28;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    cout<<m.size()<<endl;

    m.erase("Payal");
    m.erase("payal");
    
    cout<<m.size()<<endl;

    // for(pair<string,int> p : m){
    //     cout<<p.first<<": "<<p.second<<endl;
    // }
    for(auto p : m){
        cout<<p.first<<": "<<p.second<<endl;
    }
}