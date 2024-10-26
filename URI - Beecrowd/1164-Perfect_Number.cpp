#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t,flag=0;
    cin>>t;
    int p;
 for( int i=1;i<=t;i++){
    long int sum=0;
     cin>>p;
     for(int i=1;i<=p/2;i++){
         if(p%i==0){
           sum+=i;
         }
     }
     if(sum==p){
         cout<<p<<" eh perfeito"<<endl;
     }
     else {
         cout<<p<<" nao eh perfeito"<<endl;
     }
 }
    return 0;
}