#include <iostream>
using namespace std;
int main () {
 
//A=65  Z=90 a=97 z=122 ;

char a;
cout<<"Enter a character:";
cin>>a;

int value=(int)a;   // it an be converted autometically also ;


// if(a>'A' && a<'Z' || a>'a' && a<'z') cout<<"Yes it is an alphabet";

  if((value>=65 && value<=90) || (value>=97 && value<=122)) cout<<"Yes it is an alphabet";

else cout<<"It is not an alphabet";

}