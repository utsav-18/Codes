#include <iostream>
using namespace std;
int main () {
 
    float x;
    cout<<"Enter a floating-point number : ";
    cin>>x;

    int num =(int)x;

    if(num<0) num=num-1;

    float frac =  x-num;

    cout<<"Fractional part of "<<x<<" is: "<<frac;


    return 0;

}