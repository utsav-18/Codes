#include <iostream>
#include <vector>
using namespace std;
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int i=0;int j=cols-1;
        while(i<=rows-1 && j>=0){
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }
        return false;
    }

    int main(){
        vector<vector<int>>v;
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        vector<int>v4;
        vector<int>v5;

        v1={1,4,7,11,15};
        v2={2,5,8,12,19};
        v3={3,6,9,16,22};
        v4={10,13,14,17,24}; 
        v5={18,21,23,26,30}; 

        v.push_back(v1);
        v.push_back(v2);
        v.push_back(v3);
        v.push_back(v4);
        v.push_back(v5);

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

   if(searchMatrix(v,0)) cout<<"Found";
   else cout<<"Not Found";

    }