#include <iostream>
        using namespace std;
        int main () {

            // int a=5,b=5;

            // int *p1=&a,*p2=&b;

            int a,b;
            int *p1=&a,*p2=&b;

         // ((((  int* p1=&a,p2=&b;  this will not work; ))))

          //  cout<<"Enter a:";cin>>a;
            cout<<"Enter a:";cin>>*p1;

           // cout<<"Enter b:";cin>>b;
            cout<<"Enter b:";cin>>*p2;


            cout<<"sum :";


           // cout<<a+b;

            cout<<*p1+*p2;

        }