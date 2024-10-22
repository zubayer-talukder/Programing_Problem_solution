#include <bits/stdc++.h>
using namespace std;
int main() {
 float sum=0;
 int count=0;
    while(true){
        int x;
        cin>>x;
        
        if(x>0){
            sum +=x;
            count++;
        }
        if(x<0){
            cout<<fixed<<setprecision(2)<<sum/count<<endl;
            break;
        }
    }
 
    return 0;
}