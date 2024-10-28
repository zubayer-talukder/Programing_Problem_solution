#include <bits/stdc++.h>
using namespace std;
int main() {
 double sum=1.0,denom=2.0;
    for(int i=3;i<=39;i+=2){
        {
            sum+=i/(denom);
            denom*=2;
        }
    }
    cout<<fixed<<setprecision(2)<<sum<<endl;
 
    return 0;
}