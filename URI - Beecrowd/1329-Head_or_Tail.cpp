
#include <bits/stdc++.h>
 using namespace std;
int main() {
 
 
  int t;
  while(true){
      cin>>t;
      if(t==0)break;
       int mary_head=0,john_tail=0;
      int temp;
      for(int i=0;i<t;i++){
          cin>>temp;
          if(temp==0)mary_head++;
          else john_tail++;
      }
      cout<<"Mary won "<<mary_head<<" times and John won "<<john_tail<<" times"<<endl;
  }
 
    return 0;
}