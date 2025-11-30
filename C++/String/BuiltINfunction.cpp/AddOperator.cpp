#include <iostream>
using namespace std;
int main(){
    string s1;cout<<"Write: ";
    getline(cin,s1);
    string s2;cout<<"Write: ";
    getline(cin,s2);

    cout<<"You entered s1: "<<s1<<endl;
    cout<<"You entered s2: "<<s2<<endl;

    s1=s1+s2;
    cout<<s1<<endl;
    
//or it can work like this also;

    s1=s1+" is from Bihar";
    cout<<s1;

   
}