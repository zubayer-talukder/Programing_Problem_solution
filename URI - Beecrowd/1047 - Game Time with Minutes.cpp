#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hr1, hr2, min1, min2, temp_min1, temp_min2;
    cin >> hr1 >> min1 >> hr2 >> min2;
    if (hr1 == hr2 && min1 == min2)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        temp_min1 = hr1 * 60 + min1;
        temp_min2 = hr2 * 60 + min2;

        if (temp_min2 < temp_min1)
        {
            temp_min2 += 60 * 24;
        }
        int final_hr, final_min;
        final_min = temp_min2 - temp_min1;
        final_hr = final_min / 60;
        final_min = final_min % 60;

        cout << "O JOGO DUROU " << final_hr << " HORA(S) E " << final_min << " MINUTO(S)" << endl;
    }

    return 0;
}