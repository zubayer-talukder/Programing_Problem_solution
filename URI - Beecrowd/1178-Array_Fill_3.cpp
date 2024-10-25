#include <bits/stdc++.h>
using namespace std;
int main() {
  double x;
    cin>>x;
    cout<<"N["<<0<<"] = "<<fixed<<setprecision(4)<<x<<endl;
    for(int i=1;i<100;i++){
      x/=2;
     
     cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<x<<endl;

   }
    
    return 0;
}