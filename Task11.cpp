#include <iostream>
using namespace std;
int main()
{
 int speed;
 while(1)
  { 
 cout <<"Enter your car speed in kilometer per hour: ";
 cin >>speed;
   
  if (speed > 100)
   {
     cout <<"Halt...You will be challanged " <<endl;
   }
    if (speed < 100)
     {
       cout <<"You are driving perfectly "<<endl;
     }
      if (speed==100)
       {
         cout <<"Perfect! YOu are good to go "<<endl;
       }
   }

}