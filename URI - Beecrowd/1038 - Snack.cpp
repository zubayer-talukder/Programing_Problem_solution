#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, unit;
    cin >> x >> unit;
    float price;
    if (x == 1)
    {
        price = 4.0;
    }
    if (x == 2)
    {
        price = 4.5;
    }
    if (x == 3)
    {
        price = 5;
    }
    if (x == 4)
    {
        price = 2;
    }
    if (x == 5)
    {
        price = 1.5;
    }
    cout << "Total: R$ " << fixed << setprecision(2) << unit * price << endl;
    return 0;
}