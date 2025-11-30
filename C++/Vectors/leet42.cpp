//Traping rain water optimised; not using next[],mini[],mini 

#include <iostream>
#include <vector>
using namespace std;
   
int trap(vector<int>& height) {
        int s=height.size();

    int prev[s];
    prev[0]=-1;
    int max=height[0];

    for(int i=0;i<s;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }
 
    prev[s-1]=-1;
     max=height[s-1];

    for(int i=s-1;i>=0;i--){
        if(max<prev[i]) prev[i]=max;
        if(max<height[i]) max=height[i];
    }


int water=0;

for(int i=1;i<s-1;i++){
   
    if(height[i]<prev[i]) {
        water+=(prev[i]-height[i]);
    }
   
}
    
 return water;

    }

    int main (){

        vector<int>v={0,1,0,2,1,0,1,3,2,1,2,1};;
        
       int water=trap(v);

cout<<"Trapped water is :"<<water<<" units";

    }
