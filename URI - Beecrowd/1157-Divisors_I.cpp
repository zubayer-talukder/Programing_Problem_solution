#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
       if(x%i==0){
        cout<<i<<endl;}
        
    }
 
    return 0;
}

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
  float sum=0;
   for(int i=0;i<12;i++){
        
            sum+=arr[i][i];
        }
    if(x=='S'){ 
       
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    
  else  if (x=='M'){
       float avg=sum/12.0;
       cout<<fixed<<setprecision(1)<<avg<<endl;
    }
    
 
    return 0;
}