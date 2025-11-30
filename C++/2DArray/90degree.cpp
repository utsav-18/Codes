#include <iostream>
using namespace std;
    int main (){

    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

       // 1 2 3     1 4 7     7 4 1 
       // 4 5 6  =  2 5 8  =  8 5 2 
       // 7 8 9     3 6 9     9 6 3
   

for(int i=0;i<3;i++){
   for(int j=i+1;j<3;j++){
      int temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
   }
}

for(int k=0;k<3;k++){
   int i=0;int j=2;
   while(i<=j){
      int temp=arr[k][i];
      arr[k][i]=arr[k][j];
      arr[k][j]=temp;
      i++;j--;
   } 
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       cout<<arr[i][j]<<" ";
     }
     cout<<endl;
   }

// did not  get it  leet48;
    
}