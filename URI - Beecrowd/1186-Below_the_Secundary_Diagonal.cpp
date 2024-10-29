#include <bits/stdc++.h>
using namespace std;
int main() {
 
 char x;
 cin>>x;
   double arr[12][12],sum=0;
   double count=0.0;
   for(auto i=0;i<12;i++){
       for (auto j=0;j<12;j++){
           cin>>arr[i][j];
       }
   }
 int l=0;
      //left side 
      for(int i=11;i>=1;i--){
          l++;
          
          for(int j=11;j>=l;j--){
              sum+=arr[i][j];
              count++;
          }
      }
      
    if(x=='S'){  
      cout<<fixed<<setprecision(1)<<sum<<endl;
  } 
   else if(x=='M'){
       cout<<fixed<<setprecision(1)<<sum/count<<endl;
   }
 
    return 0;
}