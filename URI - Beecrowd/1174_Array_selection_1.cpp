#include <bits/stdc++.h>
 using namespace std;
int main() {
 
 float arr[100];
 for(auto i=0;i<100;i++){
     cin>>arr[i];
     if(arr[i]<=10){
         cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<arr[i]<<endl;
     }
 }
 
    return 0;
}

