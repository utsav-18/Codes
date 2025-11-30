#include <iostream>
using namespace std;
int main() {
    string str="abcdef";
cout<<"Str.substr(idx)\n";
    cout<<str.substr(0)<<endl;
    cout<<str.substr(1)<<endl;
    cout<<str.substr(2)<<endl;
    cout<<str.substr(3)<<endl;
    cout<<str.substr(4)<<endl;
    cout<<str.substr(5)<<endl;
    cout<<str.substr(6)<<endl;

cout<<"Str.substr(idx,length)\n";
    cout<<str.substr(0,1)<<endl;
    cout<<str.substr(1,2)<<endl;
    cout<<str.substr(0,6)<<endl;
    cout<<str.substr(1,5)<<endl;
    cout<<str.substr(2,4)<<endl;
    cout<<str.substr(3,1)<<endl;
    cout<<str.substr(3,3)<<endl;

}