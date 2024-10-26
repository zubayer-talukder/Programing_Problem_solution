#include <bits/stdc++.h>
using namespace std;
int main() {
 
 while(true){
    int x;
    cin>>x;
    if(x==0){
     break;
 }
    for(int i=1;i<=x;i++){
       if(i!=x)
        cout<<i<<" ";
        if(i==x){
            cout<<i<<endl;
         
            break;}
    }
 }
 
        
    
 
 return 0;
}