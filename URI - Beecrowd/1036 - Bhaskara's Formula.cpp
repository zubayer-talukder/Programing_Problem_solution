#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else if (((b * b) - 4 * a * c) < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        float x, y;
        x = (-b + sqrt(((b * b) - 4 * a * c))) / (2 * a);
        y = (-b - sqrt(((b * b) - 4 * a * c))) / (2 * a);
        cout << "R1 = " << fixed << setprecision(5) << x << endl;
        cout << "R2 = " << fixed << setprecision(5) << y << endl;
    }
    return 0;
}