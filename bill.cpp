#include<iostream>
using namespace std;

 class bill
{
 int unit;
 float charge;
 char name[20];
 public:

 void read()
 {
	cout<<"enter name :";
	cin>>name;
	cout<<"enter units consumed :";
	cin>>unit;
 }

 void display()
 {      
        cout<<"\nCONSUMER DETAILS:";
 	cout<<"\nname : "<<name;
	cout<<"\nunits consumed : "<<unit;
	cout<<"\ncharge : "<<charge/100<<"paise"<<endl;
 }
 
 void compute()
 {
	if(unit>300)
	{
		charge=100*60;
		charge=200*80;
		charge=(unit - 300)*90;
	}
	else if (unit>100)
	{
		charge=100*60;
		charge=(unit - 100)*80;
	
	}
	else 
	{
		charge=unit*60;
	}

	charge+=50;
	if(charge>300)
		charge+=300*(15/100);
	
 }
};

 int main()
{
 bill b[10];
 int i;
 for(i=0;i<3;i++)
 {
 	b[i].read();
 	b[i].compute();
 }
 for(i=0;i<3;i++)
 {
 	b[i].display();
 }
}
		
