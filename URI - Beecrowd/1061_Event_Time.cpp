#include <bits/stdc++.h>
using namespace std;
int main()
{ 
    int day1, day2, hr1, hr2, min1, min2, sec1, sec2;
    string temp;
    char colon;
    cin >> temp;
    getchar();
    cin >> day1;
    cin >>hr1>>colon;
   
    cin >> min1>>colon;
    
     cin >> sec1;

// day 2 
   cin >> temp;
    getchar();
    cin >> day2;
    cin >>hr2>>colon;
        
    cin >> min2>>colon;
        
     cin >> sec2;
     int total_sec1 = day1 * 86400 +hr1*3600 + min1* 60+ sec1;
     int total_sec2 = day2 *86400 +hr2*3600 + min2 *60+ sec2;
     int remain_sec = total_sec2 - total_sec1;

     cout << remain_sec / 86400<<" dia(s)"<<endl;
     remain_sec  %= 86400;

     cout << remain_sec / 3600<<" hora(s)"<<endl;
     remain_sec  %= 3600;

     cout << remain_sec / 60<<" minuto(s)"<<endl;
     remain_sec  %= 60;

     cout << remain_sec <<" segundo(s)"<<endl;

     return 0;
}
