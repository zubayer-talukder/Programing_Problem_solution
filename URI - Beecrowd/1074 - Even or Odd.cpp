#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
        // null
        if (arr[i] == 0)
            cout << "NULL" << endl;
        // pos
        else if (arr[i] > 0)
        {
            if (arr[i] % 2 == 0)
                cout << "EVEN POSITIVE" << endl;
            else
                cout << "ODD POSITIVE" << endl;
        }
        else
        { // neg
            if (fmod(arr[i], 2) == -1)
            {
                cout << "ODD NEGATIVE" << endl;
            }
            else
                cout << "EVEN NEGATIVE" << endl;
        }
    }
    return 0;
}