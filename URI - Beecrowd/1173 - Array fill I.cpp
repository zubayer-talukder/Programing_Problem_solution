#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int arr[10];
    for (auto i = 0; i < 10; i++)
    {

        if (i == 0)
            cout << "N[" << i << "] = " << x << endl;

        else
            cout << "N[" << i << "] = " << x << endl;
        x *= 2;
    }
    return 0;
}