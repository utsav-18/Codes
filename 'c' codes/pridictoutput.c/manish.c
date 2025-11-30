#include<stdio.h>
int main(){
    int m1;
    printf("Enter marks in m1\n");
    scanf("%d",&m1);
    int m2;
    printf("Enter marks in m2\n");
    scanf("%d",&m2);
    int m3;
    printf("Enter marks in m3\n");
    scanf("%d",&m3);
    int sum = m1 + m2 + m3;
     
    int percent = (sum*100)/300;
    printf("percentage is :%d",  percent);
    if(percent<33){
        printf("fail");
    }
    else {
        printf("pass");
    }
    return 0;
}