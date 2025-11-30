#include <iostream>
using namespace std;

int main(){

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

//desired wave form; 

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i%2==0 || i==0){
            cout<<a[i][j]<<" ";
        }
        else {
            cout<<a[i][n-1-j]<<" ";
        }
    }
}


}


