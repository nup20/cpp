#include <iostream>

using namespace std;

class Triangle
{
    public:
float L,H,B;

 perimeter(float a,float b,float c)
 {
      L=a;
      B=b;
     H=c;
     cout<<"Length:"<<L<<endl;
     cout<<"Breadth:"<<B<<endl;
     cout<<"Height:"<<H<<endl;
     cout<<"perimeter of Triangle:"<<L+B+H<<endl;
 }
  area(float a,float b,float c)
 {
    L=a;
    B=b;
    H=c;
     cout<<"Length:"<<L<<endl;
     cout<<"Breadth:"<<B<<endl;
     cout<<"Height:"<<H<<endl;
     cout<<"area of Triangle:"<<(L+B+H)/2<<endl;
 }



};
int main()
{ Triangle T;
T.perimeter( 2,3,4);
T.area(2,3,4);



    return 0;
}
