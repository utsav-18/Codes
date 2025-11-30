#include <stdio.h>

    
    void func(int *a){
        
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
           if(a[j]>a[j+1]){
            int temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
    }
}
       

    }
    
    int main(){
    
    int arr[5]={4,3,5,2,1};
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }printf("\n");
    
    int *p=arr;
    
    func(p);
    
    
        
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
    

    return 0;
    
}