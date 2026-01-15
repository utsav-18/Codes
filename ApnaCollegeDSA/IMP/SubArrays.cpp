 #include <iostream>
 #include <climits>
using namespace std;


 


int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};

        int maxSum = INT_MIN;
    for (int i=0;i<n;i++){
        int currSum=0;
        for(int j=i;j<n;j++){
            currSum += arr[j];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<"MAx Sum: "<<maxSum<<endl;
}