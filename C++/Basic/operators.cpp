#include <iostream>
using namespace std;

int main () {

int x=10,y=10;

cout<<"Addition: "<<x+y<<endl;
cout<<"Substraction: "<<x-y<<endl;
cout<<"Multiplication: "<<x*y<<endl;
cout<<"Division: "<<x/y<<endl;

/*Increment and decrement */

cout<<"\n";

x++; //post increment

cout<<"post Increment x: "<<x<<endl;

y--; // pre increment;
cout<<"Post Decremented y: "<<y;

cout<<"\n\n";

x=10,y=10;

++x; //pre increment

cout<<"Pre Incremented x: "<<x<<endl;

--y; // post increment;
cout<<"Pre Decremented y: "<<y;



}