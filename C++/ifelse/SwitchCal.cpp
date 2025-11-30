#include<iostream>
using namespace std;
int main () {

    int a,b;
    char op;

    cin>>a;
    cin>>op;
    cin>>b;

        switch (op)
        {
            case '+':
            cout<<a<<"+"<<b<<"="<<a+b;
            break;

            case '-':
            cout<<a<<"-"<<b<<"="<<a-b;
            break;

            case '*':
            cout<<a<<"*"<<b<<"="<<a*b;
            break;

            case '/':
            cout<<a<<"/"<<b<<"="<<a/b;
            break;
        
        default:
            cout<<"Invalid operator.";
            break;
        
        }



}