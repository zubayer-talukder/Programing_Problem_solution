#include <bits/stdc++.h>
using namespace std;
int main() {
 int m,n,sum=0;
 while(1){
 cin>>m>>n;
sum=0;
 if(m<=0|| n<=0){
     break;
 }
 if(n>m)swap(m,n);
 for(n;n<=m;n++){
     cout<<n<<" ";
     sum+=n;
 }
 cout<<"Sum="<<sum<<endl;
 
 }
    return 0;
}