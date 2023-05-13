#include <iostream>

using namespace std;
class Average
{
      
public:
double num1,num2,num3;

      Average()
     {
      cal();

            
}
void cal()
{


      cout<<"Num 1:"<<endl;
      cin>>num1;
      cout<<"Num 2:"<<endl;
      cin>>num2;
      cout<<"Num 3:"<<endl;
      cin>>num3;

       cout<<"Average of 3 Numbers are:"<<(num1+num2+num3)/2<<endl;


}

};
int main()
{
     Average();
    return 0;
}
