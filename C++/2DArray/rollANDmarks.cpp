#include <iostream>
using namespace std;
    int main (){

    int mark[4][2];

        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cin>>mark[i][j];
            }
        }   

        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                
                cout<<mark[i][j]<<" ";
            }
            cout<<endl;
        }


}