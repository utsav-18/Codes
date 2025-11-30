#include <stdio.h>
int main() {

int n;
printf("Enter n:");
scanf("%d",&n);


for(int i=1;i<=n;i++){

    char a='A';
    
     for(int k=1;k<=i;k++){

       printf("%c",a);
         
        a++;
    }
    
    printf("\n");

}

return 0;
}