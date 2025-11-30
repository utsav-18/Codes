#include <stdio.h>
    
    int  fact(int x,int y){

        if(y>1)
         return x*fact(x,y-1);

    }
    
    int main () {

int x,y;
scanf("%d%d",&x,&y);

int long ans=fact(x,y);

printf("%d",ans);

  return 0;

    }