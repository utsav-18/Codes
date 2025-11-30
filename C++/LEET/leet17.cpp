 #include <iostream>
 #include <vector>
 #include <string>

 using namespace std;
 
    vector<string> letterCombinations(string digits) {
        string arr[9][2]={  {"2","abc"},
                            {"3","def"},
                            {"4","ghi"},
                            {"5","jkl"},
                            {"6","mno"},
                            {"7","pqrs"},
                            {"8","tuv"},
                            {"9","wxyz"}
                           };

    vector<string>ans;

                    for(int i=0;i<9;i++){
                        if(strcmp(arr[i][0],digits[i])==0){
                            ans.push_back(arr[i][1]);
                            
                        }
                    }
                    return ans;
    }
    int main(){
        vector<string>v;
        v=letterCombinations("23");

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }


        