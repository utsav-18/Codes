//vectors are pass by value;

#include <iostream>
    #include <vector>
        using namespace std;
            
    void change(vector<int>&v){                   //*** :-(  &v  )

        v[0]=2;
        v[v.size()-1]=2;

        cout<<"Changed: ";
      }

    int main (){
        
        vector<int>v;
      v.push_back(1);  
      v.push_back(1);  
      v.push_back(1);  
      v.push_back(1);  
      v.push_back(1);  

cout<<"Original: ";

        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

      }

      cout<<endl;

      change(v);

      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";             // now it will  give you the changed value;

      }


      return 0;

    }