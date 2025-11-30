//Arrange all zeros in end;

#include <stdio.h>
int main () {
 
  int arr[5]={0,1,0,2,3};
  int n=5;
  int ans[n];    // disturbs space complexity;

  int idx=0;
     
 for(int i=0;i<n;i++){

        if(arr[i]!=0){
        
        ans[idx]=arr[i];
        idx++;
        
        }    
   }
        
for(int i=0;i<idx;i++){
    printf("%d ",ans[i]);
}

for(int i=idx;i<n;i++){
      ans[i]=0;
      printf("%d ",ans[i]);
}

    return 0;

}