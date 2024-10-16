#include <bits/stdc++.h>
using namespace std;
int main()
{
    int times, speed;
    cin >> times >> speed;
    double fuel_needed;

    fuel_needed = (times * speed) / 12.0;
    cout << fixed << setprecision(3) << fuel_needed << endl;
    return 0;
}