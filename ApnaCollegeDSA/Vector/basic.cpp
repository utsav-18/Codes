#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector<int>v1(10,5);
    for (int i: v1){
        cout<<i<<" ";
        }
cout<<endl;
    vector<char>v2(10,'a');
    for (char i: v2){
        cout<<i<<" ";
        }
cout<<endl;
v1.push_back(6);

cout<<v1.back()<<endl;
cout<<v1.front()<<endl;
cout<<v2.at(2);

}