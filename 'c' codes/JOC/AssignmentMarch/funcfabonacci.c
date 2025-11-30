#include <stdio.h>

void fabo(int n){

int a=0,b=0,c=1;int sum=0;

for(int i=1;i<=n;i++){
printf("%d ",c);
a=b;
b=c; 
sum=sum+c;
c=a+b;
}

printf("\n%d",sum);

}

int main() {

int n;
printf("Enter n:");
scanf("%d",&n);

fabo(n);

return 0;

}