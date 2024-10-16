#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int x;
    cin >> x;

    for (long long int i = 2; i <= x; i++)
    {
        if (i % 2 == 0)
            cout << i << "^" << "2 = " << i * i << endl;
    }

    return 0;
}