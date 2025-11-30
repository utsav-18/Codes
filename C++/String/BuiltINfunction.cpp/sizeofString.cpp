#include <iostream>
using namespace std;
int main(){
    string s;cout<<"Write: ";
    getline(cin,s);
    
    cout<<"You entered :"<<s;
    cout<<endl<<"Its size is: "<<s.length();
}