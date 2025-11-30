#include <iostream>
using namespace std;
int main () {

int a;
cout<<"Enter a number:";
cin>>a;


// if((a%5==0 || a%3==0) && a%15!=0) cout<<"Done";

    if(a%5!=0 || a%3!=0) {cout <<"Not divisible by 5 or 3";}

    if(a%5==0 || a%3==0) {

    if(a%15!=0) {

        cout<<"The given number is divisible by 5 0r 3 but not by 15.";

        }

        else cout<<" Faled it is Divisible by 15";
        
    }

    

     

}