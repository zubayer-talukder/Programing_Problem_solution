#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,sum=0;
        cin>>a>>b;
        if(a>b)swap(a,b);

        for(int j=a+1;j<b;j++){
            if(j%2==1){
                sum+=j;
            }
        }
        
    
  cout<<sum<<endl;
    }
        
    
 
    return 0;
}