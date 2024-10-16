#include <bits/stdc++.h>
using namespace std;
int main() {
   double a,b,c,avg;
    cin>>a>>b>>c;
    avg=((a*2)+(b*3)+(c*5))/(3+5+2);
    
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<avg<<endl;
    return 0;
}