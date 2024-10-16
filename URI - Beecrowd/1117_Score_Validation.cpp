#include <bits/stdc++.h>
 using namespace std;
int main() {
    float count = 0, x, total, temp = 0;
    while (cin >> x)
    {
        if (x >= 0 && x <= 10)
        {
            count++;
            temp += x;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
        if (count == 2)
            break;
 }
 cout << "media = " << temp / 2.00 << endl;
 return 0;
}
