#include <bits/stdc++.h>
using namespace std;
int main()
{
    // product 1
    int pro1, unit1;
    double price1, total1;
    cin >> pro1 >> unit1 >> price1;
    total1 = unit1 * price1;

    // product 2
    int pro2, unit2;
    double price2, total2;
    cin >> pro2 >> unit2 >> price2;
    total2 = unit2 * price2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total1 + total2 << endl;
    return 0;
}