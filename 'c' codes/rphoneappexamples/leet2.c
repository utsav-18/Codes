#include <stdio.h>
int main () {

int num1[5]={5,2,1,4,5};
int num2[5]={0,0,0,0,2};

int smallestCommon = -1; 

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {


if (num1[i] == num2[j] && (smallestCommon == -1 || num1[i] < smallestCommon)) smallestCommon = num1[i];
                
    
      }
    
    }


printf("%d\n",smallestCommon);

    return 0;

}