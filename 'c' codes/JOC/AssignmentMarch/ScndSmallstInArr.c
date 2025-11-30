#include <stdio.h>
    int main () {

            int a[5]={4,5,78,76,65};

            int min=a[0];
            int smin=a[3];
            int x;

            for(int i=0;i<5;i++){

                    if(min>a[i]){
                         
                       x=i;
                         
                    }

            }

            for(int j=0;j<5;j++){

                     if(j==x) {
                        continue;
                     }

                      else if(smin>a[j]){
                         smin=a[j];
                         
                    }
            }




        printf("\nSecond Smallest: %d",smin);


return 0;

    }


