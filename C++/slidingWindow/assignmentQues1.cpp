#include <iostream> 
#include <vector> 
    using namespace std;

    int numOfsub(vector<int> &v,int k,int threshold){
            int n = v.size();
            int i=0,j=0,sum=0,average=0,count = 0;
            int t;
                while(j<n){
                    t=k;
                    j=i;
                    i++;
                    sum=0;
                    while((j-i+1)!=t){
                        sum = sum + v[j++];
                    }
                    average = sum / t;
                    if(average>=threshold) {
                        count++;
                    }
                }
                return count;
            }

        int main() {
            int arr[] ={11,13,17,23,29,31,7,5,2,3};
            int s = sizeof(arr)/sizeof(arr[0]);
            vector<int>v(arr,arr+s);
                cout<<numOfsub(v,3,5);
            }