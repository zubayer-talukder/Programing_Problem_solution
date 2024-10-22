#include <bits/stdc++.h>
using namespace std;
int main() {
 
   int h1,m1,h2,m2;
   while(true){
       cin>>h1>>m1>>h2>>m2;
       if(h1==0 && m1==0 && h2==0 && m2==0){
           break;
       }
       int temp_current,temp_final,ans;
       temp_final=(h2*60+m2);
       temp_current=(h1*60+m1);
       if(temp_current>temp_final){
           ans=1440+temp_final-temp_current;
           cout<<ans<<endl;
       }
       else{
           ans=temp_final-temp_current;
             cout<<ans<<endl;
       }
     
   }
   
 
    return 0;
}