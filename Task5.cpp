#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y); 
int main()
{
 int x=20,y=30;
gotoxy(x,y);
  cout <<"MY NAME IS MUHAMMAD TAYYAB: ";                                                                                           
}
void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
