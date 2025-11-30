//Q(8)

#include <iostream>
using namespace std;
    int main (){

        int arr[5]={5,1,2,0,3};

        int x;
        cout<<"Enter a num:";cin>>x;

        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){
                if(arr[i]+arr[j]==x) cout<<arr[i]<<"+"<<arr[j]<<"="<<x<<"\n";
            }
        }

    }

