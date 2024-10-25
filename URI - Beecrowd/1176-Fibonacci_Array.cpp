#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int n,t;
    cin>>n;
 
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            cout<<"Fib(0) = 0"<<endl;
        }
        else if(x==1){
            cout<<"Fib(1) = 1"<<endl;
        }
    else{    
       long long   int first=0,second=1,fibo;
        for(int i=2;i<=x;i++){
            
          
            fibo=first+second;
            
            first=second;
            second=fibo;
        }
        cout<<"Fib("<<x<<") = "<<fibo<<endl;
    }
   
    }
    return 0;
}