#include <iostream>
using namespace std;

void accurance(int a[],int size){
    int fa=-1,la=-1,v;
    for(int i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j){
                if(fa==-1){
                    fa=i;
                }
                else{
                    la=j;
                    v=a[i];
                }
            }
        }
    }
    cout<<v<<" found at "<<fa<<" and "<<la;
}

int main(){
    int a[]={1,2,3,9,4,1,6,1,8,1};
    int size = sizeof(a)/sizeof(a[0]);
    accurance(a,size);
}