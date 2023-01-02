#include <iostream>
using namespace std;
void printmenu();

void calculate_aggregate(float matricmarks,float intermarks,float ecatmarksstd1);
void compare_marks(string namestd1,int ecatmarksstd1,string namestd2,int ecatmarksstd2);
int main()
{
 string namestd1;
 string namestd2;
 int ecatmarksstd1;
 int ecatmarksstd2;
 int matricmarks;
 int intermarks;

  printmenu();

 cout <<"Enter first student name:"<<endl;
 cin >>namestd1; 
 cout <<"Enter your matric marks:"<<endl;
 cin >>matricmarks;
 cout <<"Enter your intermidiate marks:"<<endl;
 cin >>intermarks;
 cout <<"Enter student 1 ecat marks:"<<endl; 
 cin >>ecatmarksstd1;
 
 cout <<"Enter student 2 ecat marks:"<<endl;
 cin >>ecatmarksstd2;
 cout <<"Enter student 2 name to compare marks with first student: ";
 cin >>namestd2;


  calculate_aggregate(matricmarks,intermarks,ecatmarksstd1);
  compare_marks(namestd1,ecatmarksstd1,namestd2,ecatmarksstd2);

}

void printmenu()
{
cout <<" ##################################################        "<<endl;
cout <<" #                                                #        "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" #     UNIVERSITY Admission Management System     #       "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" #                                                #       "<<endl;
cout <<" ##################################################       "<<endl;

}

void calculate_aggregate(float matricmarks,float intermarks,float ecatmarksstd1)
{
 
  float aggregate;
  float matricpercentage;
  float intermidiatepercentage;
  float ecatpercentage;
  float ecatagg;
  float intermidiateagg;
  float matricagg;


  matricpercentage=(matricmarks/1100)*100;

  intermidiatepercentage=(intermarks/550)*100;

  ecatpercentage=(ecatmarksstd1/400)*100;

  matricagg=matricpercentage*0.1;

  intermidiateagg=intermidiatepercentage*0.5;

  ecatagg=ecatpercentage*0.4;

  aggregate=ecatagg+intermidiateagg+matricagg;

  cout <<"Your total aggregate is: "<<aggregate <<endl;
}

void compare_marks(string namestd1,int ecatmarksstd1,string namestd2,int ecatmarksstd2)
{
  if (ecatmarksstd1 > ecatmarksstd2)
   {
     cout <<namestd1 <<" has got more marks than "<<namestd2 <<" Your roll number is:1" <<endl;
   }
     if (ecatmarksstd1 < ecatmarksstd2)
     {
     cout <<namestd2 <<" has got more marks than "<<namestd1<<" Your roll number is:1" <<endl;
    }

}
