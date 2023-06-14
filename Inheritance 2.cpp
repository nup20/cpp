#include <iostream>

using namespace std;
class Bank
{
public:
    void getBalance()
    {double a=0;
         cout << "Deposite Money in Bank:"<<a<<endl;
    }

};
class BankA:public Bank
{
     public:
     void getBalance()
    {double b=1000;
    cout << "Deposite Money in BankA:"<<b<<endl;
    }
};
class BankB:public Bank,public BankA
{ public:
    void getBalance()
    {double c=1500;
         cout << "Deposite Money in BankB:"<<c<<endl;
    }
};
class BankC:public Bank,public BankB
{ public:
    void getBalance()
    { double d=2000;
    cout << "Deposite Money in BankC:"<<d<<endl;
    }
};
int main()
{
Bank B;
BankA ba;
BankB bb;
BankC bc;

   cout << "Welcome to Bank!" << endl;
   B.getBalance();
   ba.getBalance();
   bb.getBalance();
   bc.getBalance();



    return 0;
}
