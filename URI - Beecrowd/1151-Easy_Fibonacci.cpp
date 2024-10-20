#include <bits/stdc++.h>
using namespace std;
int main() {
    int first = 0, second = 1, fibo, n, i;
    cin >> n;
    fibo = first + second;
    cout << first << " " << second;
    for (int i = 3; n >= i; i++)
    {
        fibo = first + second; 
        cout << " " << fibo;
        first = second;
        second = fibo;
  
}    
cout<<endl;

    return 0;
}