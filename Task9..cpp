#include <iostream>
using namespace std;
void reverse(string text);
int main()
{
 string text;
 cout <<"Enter true or false: ";
 cin >>text;
 reverse(text);
}
void reverse(string text)
{
  if (text=="False")
   {
     cout <<"Your value after reversing the input is True ";
    }
  if (text=="True")
   {
    cout <<"Your value after reversing the input is False ";
   }
  


}