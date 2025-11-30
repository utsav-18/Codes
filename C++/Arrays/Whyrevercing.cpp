#include <iostream>
    using namespace std; 

    int main ()  {

        int a[10]={10,9,8,7,6,5,4,3,2,1};

  for(int i=0;i<9;i++){

        for(int j=i+1;j<10;j++){

        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
}

    for(int i=0;i<10;i++){

cout<<a[i]<<" ";

    }


}


    