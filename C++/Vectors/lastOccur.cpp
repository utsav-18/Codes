#include <iostream>
#include <vector>

    using namespace std;

     int main(){
    
 int x,y=-1;
 cout<<"Enter an element: ";cin>>x;
 vector<int>v;

// int arr[5]={2,4,5,3,2};


// for(int i=4;i>=0;i--){
//     if(arr[i]==2) x=i;
//     break;
// }

v.push_back(0);
v.push_back(3);
v.push_back(4);
v.push_back(12);
v.push_back(1);
v.push_back(5);
v.push_back(10);
v.push_back(4);

//cout<<v.size();

for(int i=0;i<v.size();i++){

    if(v.at(i)==x) y=i;
    

}

if(y!=-1)
printf("Last occurence at : %d th index",y);
        
    } 

    // need correction ;

    