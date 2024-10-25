#include <bits/stdc++.h>
 using namespace std;
int main() {
 
   int n;
   cin>>n;
      int a=1,b=1,c=1;
   for(int i=1;i<=n;i++){
 a=i,b=i,c=i;
 b=pow(b,2);
c=pow(c,3);
       cout<<a<<" "<<b<<" "<<c<<endl;    }
 
    return 0;
}