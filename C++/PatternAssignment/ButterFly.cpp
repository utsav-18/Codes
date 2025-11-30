#include<iostream>
using namespace  std;
    int main () {

        int r=8;

    for(int i=1;i<=r;i++){
        
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<=2*(r-i)+1;j++){
                cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";

        }

        cout<<endl;
    }

    // for two single lines ;


    for(int h=1;h<=r*2+1;h++){
        cout<<"*";
    }
        cout<<"\n";

    for(int h=1;h<=(r*2)+1;h++){
        cout<<"*";
    }

    //lower part
     cout<<"\n";

    for(int i=1;i<=r;i++){

        for(int j=r-i;j>=0;j--){
            cout<<"*";
        }
        for(int k=1;k<2*i;k++){
            cout<<" ";
        }
        for(int l=r-i;l>=0;l--){
            cout<<"*";
        }
        cout<<endl;
    
    }

        }