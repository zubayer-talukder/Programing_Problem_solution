#include<bits/stdc++.h>
using namespace std;
int main (){
int x;
cin>>x;
char a; 
cin>> a;
float sum=0;
float arr[12][12];
for (int i =0; i<12; i++){
for(int j=0;j<12;j++){
cin>>arr[i][j];
}
}

if (a=='S'){
for (int j=0;j<12;j++){
sum+=arr[j][x];
}
cout<<fixed<<setprecision(1)<<sum<<endl;
}

if (a=='M'){
for (int j=0;j<12;j++){
sum+=arr[j][x];
}
cout<<fixed<<setprecision (1)<<sum/12.0<<endl;
}

return 0;
}