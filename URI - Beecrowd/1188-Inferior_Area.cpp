#include <bits/stdc++.h>
using namespace std;

int main() {
    
 char x;
 cin>>x;
 
 double arr[12][12],sum=0,count=0;
 for(auto i=0;i<12;i++){
     for(auto j=0;j<12;j++){
         cin>>arr[i][j];
     }
 }
 
 int l=0;
 
 for(auto i=11;i>=7;i--){
     
     for(auto j=1+l;j<=10-l;j++){
         sum+=arr[i][j];
         count++;
     
     }
     l++;
 }
 
 if(x=='S')cout<<fixed<<setprecision(1)<<sum<<endl;
 if(x=='M')cout<<fixed<<setprecision(1)<<sum/count<<endl;
    return 0;
}