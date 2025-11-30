#include <iostream>
    using namespace std;
    
        
       void print(int x,int y){

        if(y>x) return;

        cout<<y<<" ";

        print(x,y+1);

            }
        
        
        int main () {
        int a;
        cout<<"Enter a:";cin>>a;
        print(a,1);
        }