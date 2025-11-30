// valid for 2 simililer elments only;  by me;

//question was asking for only last occurrence ;


#include <iostream>
using namespace std;
    int main () {

        int arr[5]={1,0,2,3,1};
        int firstOccurence=-1;
        int lastOccurence=-1;
        int num;

        for(int i=0;i<4;i++){
            for(int j=i+1;j<5;j++){

                

                if(arr[i]==arr[j] && i!=j)  { 
                      firstOccurence=i;
                      lastOccurence=j;
                      num=arr[i];
                     }

            }
        }

        cout<<"Occurence places of "<<num<<" are: \n";

        if(firstOccurence!=-1 && lastOccurence!=-1 ) cout<<"firstOccurence: "<<firstOccurence<<"\n"<<"lastOccurence: "<<lastOccurence;
        else cout<<"Similer element not found.";

    }

