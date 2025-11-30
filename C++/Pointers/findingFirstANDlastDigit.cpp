// write a function to find out the first and last digit of a number 
//without returning anything ;

#include <iostream>
using namespace std;


int find(int n,int *p1,int*p2){

    *p2=n%10;

       while(n>9){

         n=n/10;

    }

    *p1=n;

    return 0;

}

   int main() {

     int num=1234;
        //cin>>num;

        int fd,ld;

        int *p1=&fd,*p2=&ld;

         find(num,p1,p2);

        cout<<"First digit is: "<<*p1<<endl;
        cout<<"Last  digit is: "<<*p2;

    }