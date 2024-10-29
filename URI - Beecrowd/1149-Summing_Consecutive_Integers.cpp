#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int a,b,sum=0;
    cin>>a>>b;
    
    
    while(b<=0)
    {
       cin>>b;
       if(b>0)break;
    
        
    }
 while(b--){
     sum+=a;
     a++;
 }
 cout<<sum<<endl;
    return 0;
}