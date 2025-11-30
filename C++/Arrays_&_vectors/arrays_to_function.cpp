//pass by reference;

#include <iostream>
using namespace std;

//a[] == ptr of arr ==> *ptr=arr ==> a[]=*a;

void display(int size,int *a){   // a[] :- here it is a pointer so we cannot use sizeof(operator) to detremine the size;
 

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";

    }

    cout<<endl;

}

void change(int size,int b[]){    // int b[]= int *b

   b[0]=b[1]=b[2]=b[3]=b[4]=0;

}

   int main () {

        int arr[]={1,2,3,4,5};

        int size=sizeof(arr)/sizeof(arr[0]);

        cout<<"Array displayed by using functions: ";

        display(size,arr);

        change(size,arr);

        cout<<"Array displayed after changing it value with functions: ";

        display(size,arr);

    }