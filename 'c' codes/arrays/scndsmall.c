#include <stdio.h>
    int main () {

        int a[10]={5,2,1,3,0,0,1,4,7,82};

        int min=a[0];
        int scndmin=a[0];

//for finding maximum value 

        for(int i=0;i<10;i++){
            if(a[i]<min) min=a[i];

        }
//for finding second maximum element 

        for(int i=0;i<10;i++){
            if(a[i]<scndmin && a[i]!=min) scndmin=a[i];   // a[i]!=max    ***important

        }

        printf("Minimum: %d\n",min);
        printf("Second Minimum: %d",scndmin);

        return 0;

    }