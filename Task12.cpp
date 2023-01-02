#include <iostream>
using namespace std;
int main()
{
 int red_roses;
 int white_roses; 
 int tulips;
 float totalprice;
 float discounted_price;
 float new_bill;
 cout <<"Enter the number of red roses: ";
 cin >> red_roses;
 cout <<"Enter the number of white roses: ";
 cin >> white_roses;
 cout <<"Enter the number of tulips: ";
 cin >> tulips;
 totalprice=red_roses*2.00 + white_roses*4.10 + tulips*2.50;
 cout <<"Your original bill is: "<<totalprice <<endl;
  if (totalprice > 200)
   {
    discounted_price=totalprice*20/100;
    new_bill=totalprice-discounted_price;
    
    cout <<"Your new bill after discount is:"<<new_bill;
   }

}