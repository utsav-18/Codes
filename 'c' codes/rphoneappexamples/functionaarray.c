#include <stdio.h>
void make(int n){

        printf("Enter size:");
        scanf("%d",&n);


int arr[n];

for(int i=0;i<n;i++){
    printf("Enter %d :",i);
    scanf("%d",&arr[i]);
}

printf("Formed array is: ");



for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    
}

printf("\n");

}




int main () {

    int x;

    make(x); //array 1

    int y;

    make(y); //array 2


    return 0;

}