# // #include<iostream>
# // using namespace std;

# // int main(){
# //     int n;
# //     cout<<"Enter number: ";cin>>n;

# //     int a=0;
# //     int b=1;
# //     int c=1;

# //     if(n==1){
# //         cout<<0;
# //     }
# //     else{

# //     for(int i=1;i<=n;i++){
# //         a = b;
# //         b = c;
# //         c = a+b;
# //     }

# //     cout<<a;
# //     }
# // }


n = int(input())

a = 0
b = 1
c = 1
for i in range(1,n+1):
    a=b
    b=c
    c=a+b
    print(a,end=" ")
    

