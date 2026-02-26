#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(5);
    s.erase(1);
    s.insert(8);
    s.insert(9);
    s.insert(10);
    s.insert(55);

    for(int ele : s){
        cout<<ele<<" ";
    }cout<<endl;

    int target = 50 ;
    if(s.find(target)!=s.end()){
        cout<<target<<" Exists"<<endl;
    }
    else cout<<target<<" Does Not exists"<<endl;

}