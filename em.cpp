#include<iostream>
using namespace std;

 class EMPLOYEE
{
 int empno;
 float basic,da,it,gros,netsal; 
 char name[50];

 public:
 
 void read()
 {
	cout<<"enter employee name : \n";
	cin>>name;
	cout<<"enter employee no : \n";
	cin>>empno;
	cout<<"enter employee basic salary : \n";
	cin>>basic;
 }

 void compute()
 {
	da=basic*0.52;
	gros=(basic+da);
        cout<<"gross:"<<gros;
	it=(12*basic*0.3);
	netsal=(gros*12)-it;
	cout<<"\nnet salary is : "<<netsal<<endl<<endl;
 }

};

 int main()
{
  EMPLOYEE e[10];
 int i,n;
 cout<<"enter the no of employees: ";
 cin>>n;
 for(i=0;i<n;i++)
 {
 	e[i].read();
	e[i].compute();
 }

}
 
	
	
