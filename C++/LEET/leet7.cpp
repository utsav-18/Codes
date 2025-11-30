 #include <iostream>
 using namespace std;
    
    int reverse(int x) {

    int re=0;
        if(x>0){
        while(x>0){
            
            re=re*10+(x%10);
            x/=10;

        }

        return re;
        }
        
        else { x=-x;

             while(x>0){
            
            re=re*10+(x%10);
            x/=10;

        }

        return -re;
        }
    }

    int main (){

        int num;
        cout<<"Entre num:";
        cin>>num;

    cout<<reverse(num);

    }
        
    