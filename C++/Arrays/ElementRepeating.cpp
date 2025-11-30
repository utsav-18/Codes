#include <iostream>
using namespace std;
int main () {

int a,c=0;
cout<<"Enter Size: ";cin>>a;

    int arr[a];
    cout<<"Enter elements: "<<endl;

    for(int i=0;i<a;i++){

        cout<<"arr["<<i<<"]"<<"=> ";
        cin>>arr[i];

    }


for(int i=0;i<a-1;i++){

    for(int j=i+1;j<a;j++){

        if(j!=i && arr[i]==arr[j] ){ c=arr[i]; cout<<" Found "<<c<<" repeating itself"<<endl;  }

    }

}

 if(c==0)cout<<"Repeating element not found.";
  

}

