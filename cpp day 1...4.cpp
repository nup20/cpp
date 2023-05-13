#include <iostream>

using namespace std;
 class  Triangle
 {
 public:
    float L,B,H;

  

    void setdata()
    {
        cout<<"Lenghth :"<<endl;
        cin>>L;
        cout<<"Breadth :"<<endl;
        cin>>B;
        cout<<"Height :"<<endl;
        cin>>H;

    }
    void getdata()
    {
         cout<<"Area of Triangle:"<<L+B+H<<endl;
         cout<<"Perimeter of Triangle:"<<(L+B+H)/2<<endl;

    }
 };
int main()
{
    Triangle T;

    T.setdata();
    T.getdata();
    return 0;
}
