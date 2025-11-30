//need correction **transpsoe without extra mat;
 
#include <iostream>
using namespace std;

int main(){

//Formation: 

        int m,n;
            cout<<"Enter row of first matrix: ";cin>>m;
            cout<<"Enter column of first matrix: ";cin>>n;
             cout<<"Enter the elements of first matrix: \n";
             int a[m][n];

            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<"Element ["<<i<<"]"<<"["<<j<<"]";
                    cin>>a[i][j];
                }
            }

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }cout<<"\n";

}
cout<<"\n";

//Transpose: 

        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }
cout<<"Transpose: \n";

//Displaying: 

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }cout<<"\n";

}
cout<<"\n";

//Desired Wave Form: 

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(i%2==0 && i>=0){
            cout<<a[i][j]<<" ";
        }
        else {
            cout<<a[i][n-1-j]<<" ";
        }
    }
    
}



}


