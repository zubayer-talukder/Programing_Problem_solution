#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
int arr[n];
int pos, x = INT_MAX;
for (auto i = 0; i < n;i++){
    cin >> arr[i];
    if(arr[i]<x){
        x = arr[i];
        pos = i;
    }
}

cout << "Menor valor : "<<x<<endl<< "Posicao :"<<pos << endl;

return 0;
}
