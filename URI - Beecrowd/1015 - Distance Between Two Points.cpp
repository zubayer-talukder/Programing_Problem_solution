#include <bits/stdc++.h>
using namespace std;
int main()
{
    // point 1
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double distance;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << fixed << setprecision(4) << distance << endl;
    return 0;
}