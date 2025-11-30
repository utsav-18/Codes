#include <iostream>
    using namespace std;
        int main() {

        int m,n;
            cout<<"Enter row of first matrix: ";cin>>m;
            cout<<"Enter column of first matrix: ";cin>>n;

        int p,q;
            cout<<"Enter row of second matrix: ";cin>>p;
            cout<<"Enter column of second matrix: ";cin>>q;

    if(n==p){
        
         int a[m][n];
         int b[p][q];

            cout<<"Enter the elements of first matrix: \n";
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<"Element ["<<i<<"]"<<"["<<j<<"]";
                    cin>>a[i][j];
                }
            }
            cout<<"Elements of first matrix: \n";
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }

            
            cout<<"Enter the elements of second matrix: \n";
            for(int i=0;i<p;i++){
                for(int j=0;j<q;j++){
                    cout<<"Element ["<<i<<"]"<<"["<<j<<"]";
                    cin>>b[i][j];
                }
            }

            cout<<"Elements of second matrix: \n";
            for(int i=0;i<p;i++){
                for(int j=0;j<q;j++){
                    cout<<b[i][j]<<" ";
                }
                cout<<endl;
            }
            
            //resultant matrix; 

            int res[m][q];

                for(int i=0;i<m;i++){

                for(int j=0;j<q;j++){
                     res[i][j]=0;

                 for(int k=0;k<p;k++){
                     res[i][j] = res[i][j] + ( a[i][k]*b[k][j] ) ; 
                    
                    }
                }
            }
            
            cout<<"Elements of res matrix: \n";
            for(int i=0;i<m;i++){
                for(int j=0;j<p;j++){
                    cout<<res[i][j]<<" ";
                }
                cout<<endl;
            }
            

            }

    else {
                cout<<"The matrices can't be multiplied.";
            }

       }