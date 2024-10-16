#include <bits/stdc++.h>
using namespace std;
int fun(int i){
    if (i==1)return 1;
    return i*fun((i-1));
}
int main() {
 int n;
 cin>>n;
cout<< fun(n)<<endl;;

    return 0;
}