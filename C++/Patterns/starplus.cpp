#include <iostream>
using namespace std;

int main() {

int r;
 cout<<"Enter r:";
 cin>>r;

 if(r%2==0) r++;

    for(int i=1;i<=r;i++){

        for(int j=1;j<=r;j++){

        if(i==(r+1)/2 || j==(r+1)/2)  cout<<"* ";
        
            else cout<<"  ";

        }
 
 cout<<endl;


   }

}