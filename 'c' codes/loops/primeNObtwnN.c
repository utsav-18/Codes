#include <stdio.h>
    int main () {

        int x;
        printf("Enter x:");
        scanf("%d",&x);

        for(int i=3;i<=x;i++){
            int c=0;
            for(int j=2;j<i;j++){
                if(i%j==0) c++;
            }
            if(c==0)printf("%d ",i);
        }

            return 0;
    
    }

    // #include <stdio.h>
    // #include <stdbool.h>

    // int main () {

    //     int x;
    //     printf("Enter x:");
    //     scanf("%d",&x);

    //     for(int i=1;i<=x;i++){

    //             bool flag = false;

    //         for(int j=2;j<i;j++){
    //             if(i%j==0) flag = true;
    //         }

    //         if(flag==false) printf("%d ",i);
    //     }


    // }
