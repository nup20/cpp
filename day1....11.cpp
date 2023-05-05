#include <iostream>

using namespace std;
class Employee
{public:
    double year,salary;
    string name,address;
    void info(string a,double b,string c)
    {
        name=a;
        year=b;
        address=c;


        cout<<name<<"  "<<year<<"  "<<address<<endl;
    }

};
int main()
{ Employee E1,E2,E3;
    cout<<"Name"<<"  "<<"Year of Joining"<<"  "<<"Address"<<endl;
   E1.info("Robert",1994,"64C-WallStreet");
   E2.info("Sam",2000,"68D-Wallstreet");
   E3.info("John",1999,"26B-Wallstreet");

    return 0;
}
