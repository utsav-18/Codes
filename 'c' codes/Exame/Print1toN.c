#include <stdio.h>
    void fun(int x,int y){

        if(x<y) return;

        printf("%d ",y);

        fun(x,y+1);

    }

 int main() {
    
    int n;printf("Enter n:");scanf("%d",&n);

    fun(n,1);

        return 0;

    }