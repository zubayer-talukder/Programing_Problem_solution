#include <bits/stdc++.h>
using namespace std;
int main() {
 double sum=0,temp=0;
 for(int i=1;i<=100;i++){
     temp=1.0/i;
     sum=sum+temp;
 }
 
 cout<<fixed<<setprecision(2)<<sum<<endl;
 
    return 0;
}