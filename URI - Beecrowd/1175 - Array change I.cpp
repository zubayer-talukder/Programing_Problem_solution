#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[20];
    int arr2[20];
    int j = 20;
    for (auto i = 0; i < 20; i++)
    {
        cin >> arr1[i];
        arr2[j - 1] = arr1[i];
        j--;
    }

    for (auto i = 0; i < 20; i++)
    {
        cout << "N[" << i << "] = " << arr2[i] << endl;
    }

    return 0;
}