#include <iostream>
    using namespace std;

    int main() {

  int arr[4][4]={1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4};

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }

for(int i=0;i<4;i++){
    for(int j=0;j<4-2;j++){
        int temp=arr[i][3-j];
        arr[i][3-j]=arr[i][j];
        arr[i][j]=temp;
    }
}

cout<<"\n";

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl;
  }


}
