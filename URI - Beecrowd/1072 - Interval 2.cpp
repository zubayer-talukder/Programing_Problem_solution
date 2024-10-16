#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    long long int arr[n];
    int in = 0, out = 0;
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] >= 10 && arr[i] <= 20)
        {
            in++;
        }
        else
            out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}