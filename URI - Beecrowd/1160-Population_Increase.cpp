#include <bits/stdc++.h>
using namespace std;
int main() {
 
   int t;
    long double year;
   int PA,PB;
   double G1,G2;
  
   cin>>t;
  while(t--){
    year=0;
       cin>>PA>>PB>>G1>>G2;
   while(PA<=PB){
    PA+=(PA*G1)/100;
    PB+=(PB*G2)/100;
    year++;
    if(year>100){cout<<"Mais de 1 seculo."<<endl;
       break;
   }}
       
       
       if(year<=100) cout<<year<<" anos."<<endl;
                                                                
   }
  
 
    return 0;
}

/* 
 this code is logically corrected but this code is not accepted by the BEECROWD Judge

#include <bits/stdc++.h>
using namespace std;
int main() {
 
   int t,year;
   int PA,PB;
   double G1,G2;
  
   cin>>t;
   for(int i=0;i<t;i++){
       cin>>PA>>PB>>G1>>G2;
      double temp1,temp2;
      temp1=1+(G1/100);
      temp2=1+(G2/100);
       year =ceil((log((double)PB/PA))/(log(temp1/temp2)));
       
       if(year>100)cout<<"Mais de 1 seculo"<<endl;
       else cout<<year<<" anos."<<endl;
                                                                
   }
  
 
    return 0;
}
*/