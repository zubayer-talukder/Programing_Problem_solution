#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int year, month, day, temp_day;
    year = n / 365;
    temp_day = n % 365;
    month = temp_day / 30;
    day = temp_day % 30;

    cout << year << " ano(s)" << endl
         << month << " mes(es)" << endl
         << day << " dia(s)" << endl;

    return 0;
}