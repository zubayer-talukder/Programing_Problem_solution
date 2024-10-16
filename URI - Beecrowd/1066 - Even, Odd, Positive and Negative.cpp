#include <bits/stdc++.h>
using namespace std;
int main()
{
    double arr[5];
    int counteven = 0, countodd = 0, countpos = 0, countneg = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        if (fmod(arr[i], 2) == 0)
        {
            counteven++;
        }

        else
            countodd++;

        if (arr[i] > 0)
        {
            countpos++;
        }
        if (arr[i] < 0)
        {
            countneg++;
        }
    }
    cout << counteven << " valor(es) par(es)" << endl;
    cout << countodd << " valor(es) impar(es)" << endl;
    cout << countpos << " valor(es) positivo(s)" << endl;
    cout << countneg << " valor(es) negativo(s)" << endl;

    return 0;
}