#include <iostream>
using namespace std;

int swap(int y,int x){

        int temp=x;
        x=y;
        y=temp;

            cout<<"After a:"<<x<<endl;
            cout<<"After b:"<<y;

        return 0;


    }

int main () {

        int a=1,b=2,temp;

            cout<<"Before a:"<<a<<endl;
            cout<<"Before b:"<<b<<endl;

        swap(a,b);

    }