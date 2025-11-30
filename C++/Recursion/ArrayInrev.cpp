//Print all the elements of an array in reverse order.
#include <iostream>
using namespace std;
void rev(int* arr,int i){
    if(i<0) return;
    cout<<arr[i]<<" ";
    rev(arr,i-1);

}

int main(){
int arr[5]={1,2,3,4,5};
rev(arr,4);

}