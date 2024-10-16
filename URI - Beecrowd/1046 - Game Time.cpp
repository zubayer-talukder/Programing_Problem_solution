#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hr1, hr2;
    cin >> hr1 >> hr2;
    if (hr1 == hr2)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    else
    {
        if (hr1 > hr2)
        {
            hr1 -= 12;
            hr2 += 12;
        }
        cout << "O JOGO DUROU " << hr2 - hr1 << " HORA(S)" << endl;
    }
    return 0;
}