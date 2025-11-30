#include <stdio.h>
int main () {

int arr[5]={4,10,3,0,1};
int n=5;

int large=arr[0];
int small=arr[0];

for(int i=0;i<n;i++){
  
    if(arr[i]>large) large = arr[i];

    if(arr[i]<small) small = arr[i];
}

// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
        
//         if (arr[i]<arr[j]) large=arr[j];
      
//     }
// }


printf("%d\n",large);
printf("%d",small);

    return 0;

}
