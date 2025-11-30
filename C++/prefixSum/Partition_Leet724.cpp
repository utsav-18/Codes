  #include<iostream>
  #include<vector>
  using namespace std;

int pivotIndex(vector<int>& a) {
    int n = a.size();
        int leftsum = 0 , rightsum = 0;
        for(auto x:a) rightsum = rightsum + x;

            for(int i=0;i<n;i++){
                rightsum = rightsum - a[i];
                if(leftsum == rightsum)return i;
                leftsum = leftsum + a[i];
            }
        return -1;
    }
        int main() {
            int arr[]={1,7,3,6,5,6};
            int n = sizeof(arr)/sizeof(arr[0]);
            vector<int>v(arr,arr+n);
            cout<< pivotIndex(v);
        }