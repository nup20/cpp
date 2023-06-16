#include <iostream>

using namespace std;
class Number
{ public:
    int i;
    void printNum(int b)
    {i=b;
    cout << "Number=" <<i<< endl;
    }


};
class Rollnumber
{public:
    int j;
    void printNum(int a)
    {j=a;
    cout << "Roll Number=" <<j<< endl;
    }

};
int main()
{Number n;
Rollnumber r;

n.printNum(10);
r.printNum(20);


    return 0;
}
