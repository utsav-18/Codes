#include <iostream>
#include <vector>
using namespace std;
   
void change(vector<vector <int>> &v){
v[0][1]=100;
}   
void length(vector<vector<int>>&v){
    cout<<v.size();
}
void column(vector <vector<int>>&v){
    cout<<v[0].size();
}
   
int main(){

vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);

vector<vector<int>>v; 
    v.push_back(v1);
    v.push_back(v2);

    cout<<v[0][1]<<endl;;

    change(v);

    cout<<v[0][1]<<endl;;

    cout<<endl<<"Size / ROWs: ";

    length(v);

    cout<<endl<<"Max Column: ";

    column(v);
}