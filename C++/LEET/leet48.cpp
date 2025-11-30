#include <iostream>
#include <vector>
    using namespace std;


void rotate(vector<vector<int>>& matrix) {

                int s=matrix.size();

        //transpose;

       for(int i=0;i<s;i++){
            for(int j=i+1;j<s;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
       }
       //reverce;

        for(int i=0;i<s;i++){
            for(int j=0;j<(s+1)/2;j++){
         int temp=matrix[i][s-1-j];
         matrix[i][s-1-j]=matrix[i][j];
         matrix[i][j]=temp;
    }
   }
 }
    int main (){

        int rc;  //row and column;
        cout<<"Enter row / column:- ";
        cin>>rc;

        //incomplete;

    }
    