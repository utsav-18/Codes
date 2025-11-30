#include <iostream>
using namespace std;
int main() {

 int a;
 cout<<"Enter a num:";
 cin>>a;

 if(a%5==0){
    if(a%3==0){
        cout<<"Divisible by 5 & 3 both.";
    }
    else{
        cout<<"Not matching condition.";
    }

 }

 else {
    cout<<"Not matching condition.";
 }

}