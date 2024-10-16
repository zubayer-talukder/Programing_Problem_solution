#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int hr, min, sec, temp_sec;
    hr = n / 3600;
    temp_sec = n % 3600;
    min = temp_sec / 60;
    sec = temp_sec % 60;

    cout << hr << ":" << min << ":" << sec << endl;

    return 0;
}