#include <bits/stdc++.h>
using namespace std;

int main()
{

    double note;
    cin >> note;

    int temp = round(note * 100); // all is converted to coins
    {                             // 100

        cout << "NOTAS:" << endl;
        cout << temp / 10000 << " nota(s) de R$ 100.00" << endl;
        temp = temp % 10000;
    }
    { // 50

        cout << temp / 5000 << " nota(s) de R$ 50.00" << endl;
        temp = temp % 5000;
    }

    { // 20

        cout << temp / 2000 << " nota(s) de R$ 20.00" << endl;
        temp = temp % 2000;
    }
    { // 10

        cout << temp / 1000 << " nota(s) de R$ 10.00" << endl;
        temp = temp % 1000;
    }

    { // 5

        cout << temp / 500 << " nota(s) de R$ 5.00" << endl;
        temp = temp % 500;
    }
    { // 2

        cout << temp / 200 << " nota(s) de R$ 2.00" << endl;
        temp = temp % 200;
    }
    cout << "MOEDAS:" << endl;
    { // 1

        cout << temp / 100 << " moeda(s) de R$ 1.00" << endl;
        temp = temp % 100;
    }

    {
        //.50
        cout << temp / 50 << " moeda(s) de R$ 0.50" << endl;
        temp = temp % 50;
    }

    {
        //.25
        cout << temp / 25 << " moeda(s) de R$ 0.25" << endl;
        temp = temp % 25;
    }
    {
        //.10
        cout << temp / 10 << " moeda(s) de R$ 0.10" << endl;
        temp = temp % 10;
    }
    {
        //.05
        cout << temp / 5 << " moeda(s) de R$ 0.05" << endl;
        temp = temp % 5;
    }
    {
        //.01
        cout << temp / 1 << " moeda(s) de R$ 0.01" << endl;
        temp = temp % 1;
    }
    return 0;
}