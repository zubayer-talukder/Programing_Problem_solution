#include <bits/stdc++.h>
using namespace std;
int main() {
   string name;
   
  double salary,item_sold,commission;
   cin>>name>>salary>>item_sold;
    commission= item_sold*0.15;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary+commission<<endl;
    return 0;
}