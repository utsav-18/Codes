#include<stdio.h>
int main () {

int arr[5];    //={35,41,45,55,20};
int brr[5];
int overtime=0;
int overtimepay=0;


for(int i=0;i<5;i++){
    printf("over time for worker %d is: ",i+1);
    scanf("%d",&arr[i]);

}

for(int i=0;i<5;i++){

     overtime=0;
     overtimepay=0;

    if(arr[i]>40){
        overtime=arr[i]-40;
        overtimepay=overtime*12;
         
         brr[i]= overtimepay;
    }

    else {
         overtimepay=0;
         brr[i]=0;
    }


}

for(int i=0;i<5;i++){
    
    printf("over time pay for worker %d is: %d\n",i+1,brr[i]);
    
}


    return 0;
}