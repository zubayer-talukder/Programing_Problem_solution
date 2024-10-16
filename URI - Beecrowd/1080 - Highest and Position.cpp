#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[101];
    long long int x = INT_MIN;
    long long int pos = 0;
    for (auto i = 0; i < 100; i++)
    {
        cin >> arr[i];
        if (x < arr[i])
        {
            pos = i;
            x = arr[i];
        }
    }
    cout << x << endl
         << pos + 1 << endl;

    return 0;
}