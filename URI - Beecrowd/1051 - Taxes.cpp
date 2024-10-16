#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, taxes = 0;
    cin >> x;

    if (x >= 0 && x <= 2000)
    {
        cout << "Isento" << endl;
    }
    else if (x > 2000 && x <= 3000)
    {
        x -= 2000;
        taxes = x * .08;
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    else if (x > 3000 && x <= 4500)
    {
        x -= 2000;
        taxes = (3000 - 2000) * .08;
        x -= 1000;
        taxes += x * .18;
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    else if (x > 4500)
    {
        x -= 2000;
        taxes = (3000 - 2000) * .08;
        x -= 1000;
        taxes += (4500 - 3000) * .18;
        x -= 1500;
        taxes += x * .28;
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }

    return 0;
}