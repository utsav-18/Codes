#include<stdio.h>
#include<stdlib.h>

int main () {

int n;
printf("Enter n:");
scanf("%d",&n);

int* ptr = (int*) malloc(n*sizeof(int));  // for making separate memory (location)

int* p = ptr;  //for saving pointers address;

for(int i=1;i<=n;i++){
    scanf("%d",&(*ptr));
    ptr++;
}

for(int i=1;i<=n;i++){
    printf("%d ",(*p));   // p saves only first address of pointer
    p++;
}

    return 0;

}