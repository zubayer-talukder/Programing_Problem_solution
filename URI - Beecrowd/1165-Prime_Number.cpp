#include <bits/stdc++.h>
using namespace std;
int main() {
 
   int t;
   int x;
   cin>>t;
   
while(t--){
    int flag=0;
    cin>>x;
    
    if(x<=1){
        flag = 1;
    }
else{   for(int i=2;i<=sqrt(x);i++)
   {
       if(x%i==0){
           flag=1;
           break;
       }
   }
   if(flag==0){
       cout<<x<<" eh primo"<<endl;
   }
   else cout<<x<<" nao eh primo"<<endl;
}

   }
 
   return 0;
}