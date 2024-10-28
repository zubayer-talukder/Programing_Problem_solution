#include <bits/stdc++.h>
using namespace std;
int main() {
 while(true){
     int x,count=0,sum=0;
     cin>>x;
     if(x==0)break;
    
         for(int i=x;count<5;i++){
             if(i%2==0){
                 sum+=i;
                 count++;
                  }
                  
                
 } cout<<sum<<endl;
 
 }
    return 0;
}