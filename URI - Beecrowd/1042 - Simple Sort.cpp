#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    int new_arr[3];
    new_arr[0] = arr[0];
    new_arr[1] = arr[1];
    new_arr[2] = arr[2];
    sort(arr, arr + 3);
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl
         << endl;
    cout << new_arr[0] << endl
         << new_arr[1] << endl
         << new_arr[2] << endl;

    return 0;
}