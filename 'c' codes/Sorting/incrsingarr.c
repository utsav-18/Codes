#include <stdio.h>
int main(){

/*

int arr[5]={6,6,3,4,8};


 Time complexity is O(n^2) for this code

 for(int i=0;i<5;i++){
   for(int j=0;j<i;j++){

      if(arr[i]+arr[j]==12) printf("%d %d\n",arr[i],arr[j]); 

    }
} 

*/


 // Time complexity is O(n)  only for this code. 
 //So it is more effeicient;
 // But the array should be in increasing order; (sorted);
 

int arr[5]={1,2,3,4,5};
int i=0;
int j=4;  //(n-1)

while (i<j){
   
   if(arr[i]+arr[j] == 8 ) {
   printf("%d + %d" ,arr[i],arr[j]);
   break;
   }

   else if(arr[i]+arr[j]>8) {
    j--;
   }

   else if(arr[i]+arr[j]<8){
    i++;
   }


}

 return 0;

}