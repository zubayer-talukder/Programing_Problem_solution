#include <bits/stdc++.h>
using namespace std;
int main() {

    int n, count_c = 0, count_r = 0, count_s = 0;
    char x;
    cin >> n;
      int temp = 0;
    for (auto i = 0; i < n; i++)
    {
      
        cin >> temp;
        cin >> x;

        if (x == 'C')
        {
            count_c +=temp;
           
        }
        else if (x == 'R')
        {
            count_r +=temp;
           
        }
        else{count_s += temp;
           }
}
int total = count_c + count_r + count_s;
cout << "Total: " << total << " cobaias" << endl;
cout << "Total de coelhos: " << count_c << endl;
cout << "Total de ratos: " << count_r << endl;
cout << "Total de sapos: " << count_s << endl;

cout << "Percentual de coelhos: " << fixed << setprecision(2) << (count_c * 100.00) / total << " %"<<endl;
cout << "Percentual de ratos: " << fixed << setprecision(2) << (count_r * 100.00) / total << " %"<<endl;
cout << "Percentual de sapos: " << fixed << setprecision(2) << (count_s * 100.00) / total << " %"<<endl;
return 0;
}
