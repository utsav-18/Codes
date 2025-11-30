class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        vector<int>ans;
        int n =arr.size();  
        for(int i=0;i<n;i++){
            int c=0;
            int e=arr[i];
            for(int j=0;j<n;j++){
                if(arr[j]==e) c++;
            }
            if(c>n/3){
                bool flag = false;
                for(int k=0;k<ans.size();k++){
                    if(e==ans[k]){
                      flag = true; 
                      break;
                    }
                }
                if(!flag) ans.push_back(e);
            }
        }
        
        sort(ans.begin(),ans.end());
                
            return ans;
    }
};

