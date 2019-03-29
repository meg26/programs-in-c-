#include<iostream>
using namespace std;

 class EMPLOYEE
{
 int empcode;
 char empname[50];
 
 public:

 void getdata()
 {
	cout<<"enter employee code : ";
	cin>>empcode;
	cout<<"enter employee name : ";
	cin>>empname;
 }
 
 void display()
 {
	cout<<"\n EMPLOYEE DETAILS: ";
        cout<<"\nemployee code : "<<empcode;
	cout<<"\nemployee name : "<<empname<<endl;
 }

};


 int main()
{
 EMPLOYEE e[10];
 int i;
 for(i=0;i<6;i++)
 {
 	e[i].getdata();
 }

 for(i=0;i<6;i++)
 {
 	e[i].display();
 }
 
}
