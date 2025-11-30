#include <stdio.h>
int main() {

    int arr[10]={1,2,4,5,6,7,9,10,11,12};

  for(int i=0;i<9;i++){    //need correction;

    if(arr[i+1]!=arr[i]+1){

        arr[i]=arr[i]+1;

          printf("missing part is: %d \n",arr[i]);

        // break;

      }
  
  }


    return 0;

}