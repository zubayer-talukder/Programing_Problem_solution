#include <bits/stdc++.h>
using namespace std;
int main()
{
    double arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (fmod(arr[i], 2) == 0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;

    return 0;
}