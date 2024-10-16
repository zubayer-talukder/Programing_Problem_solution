#include <bits/stdc++.h>
using namespace std;
int main() {
   double A,B,C;
   cin>>A>>B>>C;
   //rectangle triangle
   double rectangle_area;
   rectangle_area=.5*A*C;
   cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<rectangle_area<<endl;
    
    
    //circle
    double circle_area,pi=3.14159;
    circle_area = pi*C*C;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<circle_area<<endl;
   
   
   // Trapezium
   double trapezium_area;
   trapezium_area=.5*(A+B)*C;
   cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezium_area<<endl;
  
  //Square
   double square_area;
   square_area=B*B;
   cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square_area<<endl;

   //rectangle 
   double rectangle_area1;
   rectangle_area1=A*B;
   cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle_area1<<endl;
 
   return 0;
}