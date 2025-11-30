#include <iostream> 
using namespace std;
int main(){
    int n=10;
    for (int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(j==n) cout<<"*";
            else cout<<" ";
        }

        for(int k=1;k<=i*2;k++){
            if(k==i*2) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }

    for (int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
         if(j==i)  cout<<"*";
         else cout<<" ";
       
        }
        for (int k=(n-i)*2;k>0;k--){
            if(k==1) cout<<"*";
            else cout<<" ";
        }

        cout<<"\n";
    }
}