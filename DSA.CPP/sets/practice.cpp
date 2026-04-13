#include <iostream>
#include <unordered_set>
using namespace std;

void print(unordered_set<int>& s){
    for (int ele : s){
        cout<<ele<<" ";
    }cout<<endl;
}

void search(unordered_set<int>& s, int target){
    if(s.find(target)!=s.end()){
        cout<<target<< "Exits"<<endl;
    }
    else cout<<target<<" Does Not Exists"<<endl;
}

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(3);

    print(s);
    search(s,10);

}
