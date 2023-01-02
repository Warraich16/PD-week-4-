#include <iostream>
using namespace std;
void True1(int number1,int number2);
int main()
{  
   int number1,number2;
  cout <<"Enter first number: ";
  cin >>number1;
  cout <<"Enter second number: ";
  cin >>number2;    
 True1(number1,number2);
 }
void True1(int number1,int number2)
{
      if (number1==number2)
        {
            cout <<"True:";
          }
      if (number1!=number2)
         {
           cout <<"False";
           }   
}
 