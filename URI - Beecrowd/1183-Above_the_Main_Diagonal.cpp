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
  double sum=0,count;
   for(int i=1;i<12;i++){
       for (int j = 11; j >= 0;j--){
           sum += arr[i][i];
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