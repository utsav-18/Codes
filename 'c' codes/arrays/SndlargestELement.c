#include <stdio.h>
    int main () {

        int a[10]={5,2,1,3,0,0,1,4,7,82};

        int max=a[0];
        int scndmax=a[0];

//for finding maximum value 

        for(int i=0;i<10;i++){
            if(a[i]>max) max=a[i];

        }
//for finding second maximum element 

        for(int i=0;i<10;i++){
            if(a[i]>scndmax && a[i]!=max) scndmax=a[i];   // a[i]!=max    ***important

        }



        printf("Maximum: %d\n",max);
        printf("Second Maximum: %d",scndmax);

        return 0;

    }