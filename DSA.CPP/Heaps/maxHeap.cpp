#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int> , greater<int> > pq;
    int arr[] =  {10,20,50,4,8,60,78,2,30};
    int k = 3;

    for (int i = 0;i<9;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }

    if(k==2){
            cout<<k<<"'nd Largest Element: "<<pq.top();cout<<endl;
    }
    else if(k==3){
            cout<<k<<"'rd Largest Element: "<<pq.top();cout<<endl;
    }
    else if(k==1){
            cout<<k<<"'st Largest Element: "<<pq.top();cout<<endl;
    }
    else{
            cout<<k<<"'th Largest Element: "<<pq.top();cout<<endl;
    }

}