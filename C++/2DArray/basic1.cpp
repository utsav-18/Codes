#include <iostream>
using namespace std;
    
    int main (){

 // int arr[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}; //
 
  int arr[5][5]={1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5,1,2,3,4,5};

        cout<<"Formed array: \n";


                for(int i=0;i<5;i++){
                    for(int j=0;j<5;j++){
                   cout<<arr[i][j]<<" ";
                }
                cout<<endl;
        }
 

}