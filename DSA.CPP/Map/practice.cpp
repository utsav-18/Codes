//unsorted order of keys

#include <iostream>
#include <unordered_map>
using namespace std;


int main(){
    unordered_map<int,string>m;
    m[1] = "Anshu";
    m[2] = "Utsav";
    m[3] = "Raj";

    for(auto i : m ){
        cout<<i.first<<" - "<<i.second<<endl;
    }

    if(m.find(4)!=m.end()){
        cout<<"Found "<<m[4]<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }

}