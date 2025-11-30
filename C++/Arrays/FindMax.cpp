#include <iostream>
#include <climits>

using namespace std;
    int main () {

        int a[5]={85,6,46,53,12};

        int max = INT_MIN;
        int min = INT_MAX;


        for(int i=0;i<5;i++){
            if(max<a[i])  max = a[i];
            if(min>a[i])  min = a[i];

        }

  cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;

    }