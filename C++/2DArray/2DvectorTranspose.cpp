//leet 867;
//using vectors;

#include <iostream>
#include <vector>
    using namespace std;
   
   vector<vector<int>> transpose(vector<vector<int>>& matrics){

           //row=m column=n;
        int m=matrics.size();
        int n=matrics[0].size();

    vector<vector<int>> t(n,vector<int>(m)); //m & n given opposite to t();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=matrics[j][i];
        }
    } 
    return t;

}
   
int main(){

    vector<vector<int>>v={{1,2,3},{1,2,3},{1,2,3},{1,2,3}};  //2d vector; 


            int m=v.size(); //row;
        int n=v[0].size();  //column;

            for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    } 
    
    cout<<endl;
 
    vector<vector<int>>f=transpose(v);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<f[i][j]<<" ";
        }cout<<endl;
    } 


    }