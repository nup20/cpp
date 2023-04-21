#include <iostream>

using namespace std;

class Student
{
    public:
  int roll=2;
  string name="John";
  void getdata()
  {
      cout<<"Roll:"<<roll<<endl;
      cout<<"Name:"<<name<<endl;

  }
};
int main()
{ Student s;

  s.getdata();

    return 0;
}
