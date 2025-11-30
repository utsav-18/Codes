//my code ; for r>5 pattern will be improper but code is perfect;

#include <iostream>
using namespace std;

    int main () {

        int r=5,a=1,k,j;
   
            //for first line of stars.   

            for(int d=1;d<(r*2);d++){
                        cout<<d<<" ";
            }
                         cout<<"\n";

            for(int i=0;i<=r-2;i++){   // if(i<=r) == number of spaces will be more So   => i<=r-2  because  i am starting the loop from 0;
                                                      // after this my code is giving same result as raghav sir's code;
            for(k=1,j=r-i-1;j>0;j--,k++){
                   
                        cout<<k<<" ";
             }

            for(int k=1;k<(i+1)*2;k++){
                        cout<<"  ";
            }
           
            for(k=r+1+i, j=r-i-1;j>0;j--,k++){
                   
                        cout<<k<<" ";
    
            }           
                        cout<<"\n";

                }

    }