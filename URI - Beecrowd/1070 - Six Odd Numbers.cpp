#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, count = 6;
    cin >> x;

    int i = x;
    while (count != 0)
    {

        if (i % 2 != 0)
        {
            cout << i << endl;
            count--;
        }
        i++;
    }

    return 0;
}