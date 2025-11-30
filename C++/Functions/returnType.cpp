#include <iostream>
using namespace std;

int sum(int x,int y){

return x+y;

}

int minimum(int x,int y){
int l;

if(x>y) l=y;
else l=x;

return l;


}


    int main () {

        int a,b,s;
        cout<<"A:";
        cin>>a;

        cout<<"B:";
        cin>>b;

        s=sum(a,b);


        cout<<"Sum is: "<<s<<endl;


        cout<<"Least: "<<minimum(a,b);


    }
