#include <iostream>

using namespace std;
class Adddistance
{public:
double inch1,inch2,feet1,feet2;

Adddistance1(double a,double b)
{inch1=a;
feet1=b;
    cout<<"distance 1:"<<feet1-inch1<<endl;
}
Adddistance2(double c,double d)
{
   inch2=c;
   feet2=d;
    cout<<"distance 2:"<<feet2-inch2<<endl;
}

};
int main()
{ int a,b,c,d;
    Adddistance A;




    cout<<"Enter 1feet :"<<endl;
    cin>>b;
    cout<<"Enter 1inch :"<<endl;
    cin>>a;

    cout<<"Enter 2feet:"<<endl;
    cin>>d;
    cout<<"Enter 2inch  :"<<endl;
    cin>>c;
    A.Adddistance1(a,b);
    A.Adddistance2(c,d);


    return 0;
}
