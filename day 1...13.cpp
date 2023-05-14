#include <iostream>

using namespace std;
class Employee
{public:
    double sal,whrs;
void getinfo(double a,double b)
{
    whrs=a;
    sal=b;
    if(whrs<6)
cout << " salary:" <<whrs*sal<<endl;
}
void Addsal(double a,double b)
{   whrs=a;
    sal=b;
 

if(whrs*sal<500)

    cout<<"salary:"<<(whrs*b)+818.91<<endl;

}
void Addwork(double a,double b)
{   whrs=a;
    sal=b;
if(whrs>6)
        cout<<"salary:"<<(whrs*b)+409.46<<endl;
}
};
int main()
{int a,b;
Employee E;


    cout << "Enter the working hours:" << endl;
    cin>>a;
    b=250;
    E.getinfo(a,b);
    E.Addsal(a,b);
    E.Addwork(a,b);
    return 0;
}
