#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

    string simplifyPath(string path) {
        vector<string> st;
        string part;
        stringstream ss(path);
            while(getline(ss,part,'/')){
                if(part=="" || part == "."){
                    continue;
                }
                if(part==".."){
                    if(!st.empty()){
                        st.pop_back();
                    }
                }
                else{
                    st.push_back(part);
                }
            }
            string ans = "";

            for(string dir : st){
                ans += "/"+dir;
            }
            if(ans==""){
                return "/";
            }
            return ans;
    }

int main() {

    string path = "/a/./b/../../c/";

    cout << simplifyPath(path);

    return 0;
}