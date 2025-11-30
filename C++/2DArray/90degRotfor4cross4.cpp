#include <iostream>
using namespace std;
int main (){

int arr[4][4]={1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8};

       // 1 2 3 4     1 5 1 5    5 1 5 1 
       // 5 6 7 8   = 2 6 2 6 =  6 2 6 2
       // 1 2 3 4     3 7 3 7    7 3 7 3
       // 5 6 7 8     4 8 4 8    8 4 8 4
   
//transpose;

for(int i=0;i<4;i++){
   for(int j=i+1;j<4;j++){
      int temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
   }
}

// //revercing

// for(int i=0;i<4;i++){
//     for(int j=0;j<4/2;j++){    
//         int temp=arr[i][3-j];
//         arr[i][3-j]=arr[i][j];
//         arr[i][j]=temp;
//     }
// }

//revercing

for(int i=0;i<4;i++){
int start =0;
int end=4-1;
while(start<end){
   int temp=arr[i][start];
   arr[i][start]=arr[i][end];
   arr[i][end]=temp;
   start++;
   end--;
}

}

//displaying

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
       cout<<arr[i][j]<<" ";
        }
     cout<<endl;
   }
}