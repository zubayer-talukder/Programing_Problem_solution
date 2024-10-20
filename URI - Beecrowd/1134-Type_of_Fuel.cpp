#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,count_alcohol=0,count_gasoline=0,count_diesel=0;
    while(1){
    cin>>x;    
    
   
    if(x==1){
        count_alcohol++;
    }
    else if(x==2){
        count_gasoline++;
    }
    else if(x==3){
        count_diesel++;
    }
    else if(x==4){
        break;
    }
    else {
        
    }
    }
    
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<count_alcohol<<endl<<"Gasolina: "<<count_gasoline
<<endl<<"Diesel: "<<count_diesel<<endl;
    return 0;
}