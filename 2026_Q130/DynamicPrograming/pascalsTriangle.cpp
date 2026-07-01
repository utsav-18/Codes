#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>& v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>> generate(int numRows){

    vector<vector<int>> ans;
    ans.push_back({1});

    for(int rows=1; rows<numRows; rows++){
        vector<int> r;
        vector<int>& prev = ans[rows-1];
        r.push_back(1);
        for(int i=1;i<rows;i++){
            r.push_back(prev[i-1] + prev[i]);
        }
        r.push_back(1);
        ans.push_back(r);
    }

    return ans;
}

int main(){
    vector<vector<int>> v = generate(5);
    print(v);
    return 0;
}