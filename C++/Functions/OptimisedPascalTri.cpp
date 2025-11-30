#include <iostream>
    using namespace std;
        int main () {


int r=5;

    for(int i=0;i<r;i++){

        int  curr=1;
        
        for(int o=r-i;o>0;o--){
            cout<<" ";
        }

        for(int j=0;j<=i;j++){
            cout<<curr<<" ";
            curr=curr*(i-j)/(j+1);       // formula  =>  NCr+1 = NCr*(n-r)/(r+1) ; ==next value depends upon current value==;

        }

        cout<<"\n";

    }

        }