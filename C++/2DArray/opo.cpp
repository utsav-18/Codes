#include <iostream>
    using namespace std;

    int main() {

  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  int n=3;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

// for(int i=0;i<n;i++){
//     for(int j=0;j<(n+1)/2;j++){
//         int temp=arr[i][n-1-j];
//         arr[i][n-1-j]=arr[i][j];
//         arr[i][j]=temp;
//     }
// }


for(int k=0;k<n;k++){
int i=0,j=n-1;
while(i<=j){
int temp=arr[k][i];
arr[k][i]=arr[k][j];
arr[k][j]=temp;
i++;
j--;
  }
}


cout<<"\n";
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

}

