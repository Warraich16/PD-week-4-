#include <iostream>
using namespace std;
void fprice(int price_in_dollars,string name);
int main()
{
string name;
int price_in_dollars;
int final_price;
  while(1)
  {
cout <<"Enter country's name: "<<endl;
cin >>name;
cout <<"Enter ticket price in dollars: "<<endl;
cin >> price_in_dollars;
fprice(price_in_dollars,name);
  }
}
void fprice(int price_in_dollars,string name)
{  
   
   int final_price;

 if (name=="Pakistan")
  {
    final_price=price_in_dollars*5/100;
     cout <<"Final price after discount is "<<final_price <<endl;
  }
    if (name=="Ireland")
  {
    final_price=price_in_dollars*10/100;
    cout <<"Final price after discount is "<<final_price <<endl;
  }
       if (name=="India")
  {
    final_price=price_in_dollars*20/100;
       cout <<"Final price after discount is "<<final_price;
  }
         if (name=="England")
  {
    final_price=price_in_dollars*30/100;
    cout <<"Final price after discount is "<<final_price;
  }
                 if (name=="canada")
  {
    final_price=price_in_dollars*45/100;
    cout <<"Final price after discount is "<<final_price<<endl;
  }


}
