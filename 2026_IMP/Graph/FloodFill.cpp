#include <iostream>
#include <vector>
using namespace std;

    void dfs(vector<vector<int>>& image,int i,int j, int newColor, int orgColor){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || image[i][j]==newColor || image[i][j]!=orgColor){
            return;
        }       
        image[i][j] = newColor;
        dfs(image,i-1,j,newColor,orgColor);
        dfs(image,i,j+1,newColor,orgColor);
        dfs(image,i+1,j,newColor,orgColor);
        dfs(image,i,j-1,newColor,orgColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }


int main(){
    vector<vector<int>>image;
    image = {{1,1,1},{1,1,0},{1,0,1}};

    for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<endl;
    
    int sr=1;
    int sc=1;
    int color=2;
    vector<vector<int>>ans = floodFill(image,sr,sc,color);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}