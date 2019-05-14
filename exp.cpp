#include<iostream>
using namespace std;

class employee
{
protected:
 int exp,salary;
 char name[10];

public:
 
 void read ()
 {
  	cout<<"enter the name: ";
 	cin>>name;
 	cout<<"enter the salary: ";
	cin>>salary;
	cout<<"enter the experience: ";
	cin>>exp;
	
 }
};

class department : public employee
{
protected:
 char dept_name[10];

public:
 
 void read1 ()
 {
  	cout<<"enter the department name: ";
 	cin>>dept_name;
	cout<<"\n";
 }
};


class senior : public department
{
public:
 void display()
 {
	if(exp>10)
	{
		cout<<"\nname :"<<name;
		cout<<"\nsalary: "<<salary;
		cout<<"\nexperience: "<<exp<<endl<<endl;
	}
 }
};


int main()
{
senior s[5];
int i;
cout<<"\nenter employee details\n";
for(i=0;i<5;i++)
{
s[i].read();
s[i].read1();
}
cout<<"\n the details of employee above 10 year experience are :\n";
for(i=0;i<5;i++)
s[i].display();
}  


