#include <stdio.h>
int main() {

int n;
printf("Enter n:");
scanf("%d",&n);

int m;
printf("Enter m:");
scanf("%d",&m);

for(int i =1;i<=n;i++){
    for(int j=1;j<=m;j++){

        if( i!=1 && i!=n && j>1 && j<m) printf("  ");  // tap space bar two times;
        else printf("* ");        // give extra space with star;

    }
printf("\n");

}

    return 0;
}