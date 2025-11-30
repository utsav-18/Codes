#include <iostream>
using namespace std;
    int main () {

        int r=10,i,j,k,l;

//upper part

for(i=0;i<=r;i++){
    for(j=r-i;j>0;j--){
        cout<<" ";
        }
        cout<<"*";

    // for(k=1;k<=i;k++){
    //     if(k==i || i==r)cout<<"*";
    //     else cout<<" ";
    // }

    // for(l=1;l<=i;l++){
    //     if(l==i || i==r) cout<<"*";
    //     else cout<<" ";
    // }

for(k=1;k<=2*i-1;k++){
   if(k==(2*i)/2 || i==r) cout<<"*";
   else cout<<" ";
}
 if(i>0) cout<<"*";

    cout<<endl;
}

    //lower part;

for(i=1;i<=r;i++){
    for(j=1;j<=i;j++){
        cout<<" ";
        }  
        cout<<"*";  

    for(k=2*(r-i);k>1;k--){
        if(k==(2*(r-i)+2)/2) cout<<"*";
         else cout<<" ";
    }
    if(i<r)cout<<"*";


    cout<<endl;

}

    }
    