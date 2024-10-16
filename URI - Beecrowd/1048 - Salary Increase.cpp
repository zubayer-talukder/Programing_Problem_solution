#include <bits/stdc++.h>
using namespace std;
int main()
{

    float salary, money_earned, new_salary;
    cin >> salary;
    int percentage;
    if (salary >= 0 && salary <= 400)
    {
        percentage = 15;
        new_salary = salary + salary * .15;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    }
    else if (salary >= 400.01 && salary <= 800)
    {
        percentage = 12;
        new_salary = salary + salary * .12;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    }
    else if (salary >= 800.01 && salary <= 1200)
    {
        percentage = 10;
        new_salary = salary + salary * .10;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    }
    else if (salary >= 1200.01 && salary <= 2000)
    {
        percentage = 7;
        new_salary = salary + salary * .07;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    }
    else if (salary >= 2000)
    {
        percentage = 4;
        new_salary = salary + salary * .04;
        cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary - salary << endl;
        cout << "Em percentual: " << fixed << setprecision(2) << percentage << " %" << endl;
    }

    return 0;
}