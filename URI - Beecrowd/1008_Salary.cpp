#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, hour;
    float per_hour;
    cin >> num >> hour >> per_hour;

    cout << "NUMBER = " << num << endl
         << "SALARY = U$ " << fixed << setprecision(2) << hour * per_hour << endl;
    return 0;
}