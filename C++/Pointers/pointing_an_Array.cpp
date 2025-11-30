#include <iostream>
using namespace std;
    int main () {

        int arr[5]={1,2,3,4,5};
       
       // int *ptr=&arr; wrong
       // *ptr=arr[0]

       int *ptr=arr;  // correct
       int *ptr2=&arr[0]; //correct
       
       cout<<"It will give only first element: "<<*ptr<<"\n";
       
        cout<<"Addres of whole arr: "<<ptr<<"\n"<<"Addres of arr[0]: "<<ptr2<<"\n";

cout<<"Printing using pointer: \n";   //also we can change the values using ptr;

    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";        //ptr[i]==i[ptr];  or arr[i]==i[arr];

    }

cout<<"\n";
cout<<"Printing using *pointer: \n";

        for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;             // ptr=ptr+1  : here 1 is int =(4 byte) ==> means ptr is moving 4 bytes forward  

    }
    
    cout<<"\nNow addres is not equal to original value: "<<ptr<<"\n";

    // after this ptr will lose its originigal value which was Addof(arr);
    // so,we need to give it again;
    ptr=arr;

    cout<<"Now addres is equal to original value: "<<ptr;

    }