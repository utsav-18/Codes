#include <iostream>
#include <vector>
using namespace std;
int main() {

    //time***
    // int arr[6]={1,2,3,4,5,1};

    // for(int i=0;i<6;i++){
    //     for(int j=i+1;j<6;j++){
    //         if(arr[i]==arr[j]) cout<<arr[i]<<" Found more than one!";
    //     }
    // }

    //space***
    //  int arr[6]={1,2,3,2,5,1};
    //  vector<int>v(6,0);

    //  for(int i=0;i<6;i++){
    //     v[arr[i]]++;
    //  }

    //  for(int i=0;i<6;i++){
    //     if(v[i]>1) cout<<i<<" ";
    //  }

int arr[6]={1,2,3,4,5,1};
int sum=0;
int n=5;
for(int i=0;i<=n;i++){
sum=sum+arr[i];
}
int s=0;
s=n*((n+1)/2);
cout<<sum-s<<" is the extra element";

}