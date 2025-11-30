#include <iostream>
using namespace std;

        int main(){
            int a,b,c;
            cout<<"Entre a: ";
            cin>>a;
            cout<<"Entre b: ";
            cin>>b;
            cout<<"Entre c: ";
            cin>>c;

            if((a>b && a<c) || (a>c && a<b)){
                cout<<a<<" is second largest ";
            }
            if((b>a && b<c) || (b>c && b<a)){
                cout<<b<<" is second largest ";;
            }
            if((c>a && c<b) || (c<a && c>b)){
                cout<<c<<" is second largest ";;
            }

        }