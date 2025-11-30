#include <iostream>
    using namespace std; 

    int main ()  {

        int size=10;

        int a[size]={1,2,3,4,5,6,7,8,9,10};

    int k;
    cout<<"Enter k:";cin>>k;

    k=k%size;

    for(int i=0;i<k;i++){

        for(int j=i+1;j<size;j++){

        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
}

for(int i=0;i<k;i++){

        for(int j=i+1;j<k;j++){

        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
}

    for(int i=0;i<size;i++){

cout<<a[i]<<" ";

    }


}


    