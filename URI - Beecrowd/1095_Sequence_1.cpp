#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 1;
    for (int j = 60; j >=0; ){
        cout << "I="<<i<<" "<<"J="<<j << endl;
        j -= 5;
        i+=3;
    }
        return 0;
}