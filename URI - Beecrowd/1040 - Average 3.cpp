#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n1, n2, n3, n4, avg;
    cin >> n1 >> n2 >> n3 >> n4;
    avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / (2 + 3 + 4 + 1);
    cout << "Media: " << fixed << setprecision(1) << avg << endl;
    if (avg > 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (avg >= 5 || avg <= 6.9)
    {
        cout << "Aluno em exame." << endl;
        float new_n;
        cin >> new_n;
        cout << "Nota do exame: " << fixed << setprecision(1) << new_n << endl;
        float new_avg = (avg + new_n) / 2;
        if (new_avg >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << new_avg << endl;
    }
    return 0;
}