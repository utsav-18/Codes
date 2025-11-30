#include <iostream>
using namespace std;
    int main(){

        int arr[5]={2,8,2,9,2};

        int x,c=0;
        cout<<"Enter x:";
        cin>>x;

        for(int i=0;i<5;i++){
            if(arr[i]==x) c++;

        }

        if(c>0) cout<<"Found "<<c<<" times.";
        else cout<<"Not found.";


    }

    // //using boolian;

    // #include <iostream>
    // using namespace std;
    // int main(){

    //         bool flag = false;

    //     int arr[5]={2,8,2,9,2};

    //     int x;
    //     cout<<"Enter x:";
    //     cin>>x;

    //     for(int i=0;i<5;i++){
    //         if(arr[i]==x) flag=true;

    //     }

    //     if(flag==true) cout<<"Found";
    //     else cout<<"Not found.";


    // }