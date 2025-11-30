// my way;


#include <iostream>
#include <climits>

using namespace std;
    int main () {

int o;
cout<<"Enter Size of array: ";
cin>>o;

   int a[o];
    cout<<"Enter elements: "<<endl;

    for(int i=0;i<5;i++){

        cout<<"a["<<i<<"]"<<"=> ";
        cin>>a[i];

    }

        int max = INT_MIN;       /*  we can also put '0' instead of INT_MIN;  */
        int smax = INT_MIN;
        int x;

    for(int i=0;i<5;i++){
        if(max<a[i]) {
        max=a[i];
        x=i;
        }
        
    }


    for(int j=0;j<5;j++){

        if(j==x) continue;

        else  if(smax<a[j] ) smax=a[j] ;
        

    }

  cout<<"Maximum: "<<max<<endl<<"Second Maximum: "<<smax;


    }