#include <bits/stdc++.h>
using namespace std;
int main() {
 float arr[2];
 int i=0;
  float n,p=2.00;
 while(true){
    while(true){
       
        cin>>n;
        if((n>=0&&n<=10)){
            arr[i] = n;
            i++;
        }
        else cout<<"nota invalida"<<endl;
        if(i>1) break;
    }
        cout<<"media = " << fixed << setprecision(2)<<(arr[0]+arr[1])/p<<endl;
        i = 0;
        while (true)
        {
            
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> n;


            if (n == 1 || n == 2)
            {
                break;
            }}
        if(n==1)continue;
        else break;
           
    
 }
    return 0;
}

// 



