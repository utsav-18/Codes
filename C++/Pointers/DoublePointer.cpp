//double pointer is used to store the addres of the pointer ;


#include <iostream>
    using namespace std;
        int main () {

            int x;
            int *p1=&x;
            int **p2=&p1;
            int ***p3=&p2;

        cout<<p1<<"\n"<<p2<<"\n"<<p3;

        cout<<"\n\n";

            int y=5;
            int *R1=&y;
            int **R2=&R1;
            int ***R3=&R2;

        cout<<*R1<<" "<<**R2<<" "<<***R3;

        cout<<endl<<endl;

        cout<<&y<<"\n"<<*R2<<"\n"<<**R3; //all wilbe same;
        

 }