#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        float a, b, c;
        cin >> a >> b >> c;
        cout << fixed << setprecision(1) << (a * 2 + b * 3 + c * 5) / (2 + 3 + 5) << endl;
    }

    return 0;
}