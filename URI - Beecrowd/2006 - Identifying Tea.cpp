#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, count = 0;
    cin >> x;
    int arr[5];
    for (auto i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i] == x)
            count++;
    }
    cout << count << endl;

    return 0;
}