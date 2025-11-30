//leet 42;

#include <iostream>
#include <vector>
 using namespace std;
 int main(){

    int height[12]={0,1,0,2,1,0,1,3,2,1,2,1};
     int s=12;

    cout<<"Height:"; 
    for(int i=0;i<s;i++){
        cout<<height[i]<<" ";
    } cout<<"\n\n"; 
  
    int prev[12];
    prev[0]=-1;
    int max=height[0];

   

//prev greatest ;
    for(int i=0;i<s;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }
cout<<"Prev:  "; 
    for(int i=0;i<s;i++){
        cout<<prev[i]<<" ";
    } cout<<"\n"; 
  
//Next gratest ;
    int next[s];
    next[s-1]=-1;
     max=height[s-1];

    for(int i=s-1;i>=0;i--){
        next[i]=max;
        if(max<height[i]) max=height[i];
    }

cout<<"\nNext:  "; 
    for(int i=0;i<s;i++){
        cout<<next[i]<<" ";
    } cout<<"\n";

 int mini[s];
  
    for(int i=0;i<s;i++){
        mini[i]=min(prev[i],next[i]);
    }   

  cout<<"\nMini:  "; 
    for(int i=0;i<s;i++){
        cout<<mini[i]<<" ";
    } 
    
int water=0;

    for(int i=1;i<s-1;i++){
       if(height[i]<mini[i]){
         water+= (mini[i]-height[i]);
       }
    }

printf("\n\nWater stored: %d units",water);

  }