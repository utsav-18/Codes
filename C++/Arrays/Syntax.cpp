#include <iostream>
using namespace std;
    int main () {

    //     int a[]={1,2,3,4,5}; 

    //   //  int b[];    // int this case case you have to give size;

    //     // a[0]=1,2,3,4,5,6,7,8; ?????

    //     cout<<a[0];
    //     cout<<a[1];
    //     cout<<a[2];
    //     cout<<a[3];
    //     cout<<a[4];

    int a[5];
    cout<<"Enter elements: "<<endl;

    for(int i=0;i<5;i++){

        cout<<"a["<<i<<"]"<<"=> ";
        cin>>a[i];

    }

    cout<<"Formed Array is: "<<endl;

     for(int i=0;i<5;i++){

        cout<<"a["<<i<<"]"<<"=> "<<a[i]<<endl;
        

    }

    }