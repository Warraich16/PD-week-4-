#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y); 
int main()
{
  system("cls");
  
cout <<"#####################################################################"  <<endl;
cout <<"||.. ...................................................  .......  ##"   <<endl;
cout <<"||.. %%%%%%%%%%%%%%               %%%%%%%%%%%%%%   |%|..   %%%%    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     |%|   |%|       |%|...   |%|        |%|   |%|..    |%|    ##"   <<endl;
cout <<"||..     %%%%%%%%    . . |%|...   %%%%%%%%%%%%%%      ..   %%%%..  ##"   <<endl;
cout <<"||..     |%|         . . |%|...  ............... |%|  ..        .  ##"   <<endl;
cout <<"||..     %%%%%%%%%%  . . |%|...  %%%%%%%%%%%%%   |%|  ..   %%%%%.  ##"   <<endl;
cout <<"||..              |%|. . |%|...  |%| ......      |%|  ..     |%|.  ##"   <<endl;
cout <<"||..    ........  |%|.           |%| ......|%|        ..     |%|.  ##"   <<endl;
cout <<"||..|%| |%|%%%|%|.|%|. |%|   P       ......|%|        .. |%| |%|.  ##"   <<endl;
cout <<"||..|%| |%|   |%|. .   %%%%%%%%%%%   ......|%|        .. |%|.      ##"   <<endl;  
cout <<"||..|%| |%|   |%|. .        ...|%|     %%%%%%%        .. |%|.      ##"   <<endl;
cout <<"||..|%|             .       ...|%|               |%|   . |%|.      ##"   <<endl;
cout <<"||..|%| %%%%%%%%%%          ...|%|%%%%%%%%%%%    |%|  .  |%|%%%%%% ##"   <<endl;
cout <<"||............................................   |%|  .............##"   <<endl;
cout <<"||..   .......................................            .........##"   <<endl;
cout <<"||..|%|  |%|   |%|..    %%%%%%%%%%%%%  .....|%|  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|  |%|   |%|..           ...|%|    %%%%%%  |%|  ..|%|        ##"   <<endl;
cout <<"||..|%|            .    G      ...|%|            |%|  ..|%|        ##"   <<endl; 
cout <<"||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%    |%|  ..|%|%%%%%%  ##"   <<endl;
cout <<"||............................................   |%|   ..........  ##"   <<endl;
cout <<"||..........................................              .......  ##"   <<endl;
cout <<"######################################################################" <<endl;
int x = 10,y=22;
while(1)
  {
        if (x==65){
           x=3;
             }
       gotoxy(x,y);
       cout <<" ";
      
          if (x<66)
           { 
              gotoxy(x,y);
              cout <<" P ";
              x++;
              }
       Sleep(200);

   }
}
void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
