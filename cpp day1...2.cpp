#include <iostream>

using namespace std;
class Student
{
public:
int roll;
char phno[10] ;
string name,address;


    
void setdata()
{
    cout<<"Enter name :"<<endl;
    cin>>name;
    cout<<"Enter roll :"<<endl;
    cin>>roll;
    cout<<"Enter ph numbers :"<<endl;
    cin>>phno;
    cout<<"Enter address:"<<endl;
    cin>>address;
}

void getdata()
{
    cout<<" name :"<<name<<endl;
    cout<<" roll :"<<roll<<endl;
    cout<<" ph numbers:"<<phno<<endl;
    cout<<" address:"<<address<<endl;

}


};
int main()
{ int i,n;
    cout << "No of Studen:" << endl;
    cin>>n;

    Student s[n];
    for(i=0;i<n;i++)
    {
        cout<<"student no :"<<i+1<<endl;
        s[i].setdata();
        }

    for(i=0;i<n;i++)
    {
        cout<<"student no :"<<i+1<<endl;
        s[i].getdata();
    }

     return 0;
}
