//pass by reference...

#include <iostream>
    using namespace std;
        
        void swap(int *x,int *y){

            int temp = *x;

                *x=*y;

                *y = temp;

               

        }
        
        int main () {

            int a=1,b=2;

            cout<<"Before a: "<<a<<"\n";
            cout<<"Before b: "<<b<<"\n";

            //int *p1=&a,*p2=&b;
            //swap(*p1,*p2);

            swap(&a,&b);

            cout<<"After a: "<<a<<"\n";
            cout<<"After b: "<<b<<"\n";

        }