#include <iostream>
using namespace std;
int main()
{
 int holidays;
 int working_days;
 int time_for_games;
 float difference;
 float hours;
 cout <<"Enter number of holidays: ";
 cin >>holidays;
 working_days=365-holidays;
 time_for_games=(working_days*63) + (holidays*127);
 difference=30000-time_for_games;
 hours=-(difference/60);
 if (time_for_games < 30000)
   {
    cout <<"Tom can sleep well "<<endl;
   }
   if (time_for_games > 30000)
    {
     cout <<"Tom will run away "<<endl;  
    }
     cout <<hours<<" hours" <<endl;
  
}