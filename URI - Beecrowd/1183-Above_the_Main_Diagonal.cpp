#include <bits/stdc++.h>
using namespace std;
int main() {
 
    char x;
    cin>>x;
    float arr[12][12];
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin>>arr[i][j];
        }
    }
  double sum=0,count=0;
   for(int i=0;i<11;i++){
       for( int j = i + 1; j < 12; j++) {
           sum += arr[i][j];
       count++;
       }
       
 }
    if(x=='S'){ 
       
        cout<<fixed<<setprecision(1)<<sum<<endl;
 }
    
  else  if (x=='M'){
       float avg=sum/count;
       cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    
 
    return 0;
}