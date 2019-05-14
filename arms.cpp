#include<iostream>
#include<fstream>
using namespace std;

class armstrong
{

public:
	int n;
	
	void read()
	{
		cout<<"\n";
		cin>>n;
	}

	void display()
	{
		cout<<"\n"<<n;
	}
	int arms()
	{
		int a,b,c=0;
		a=n;
		while(a!=0)
		{
		b=a%10;
		c+=b*b*b;
		a=a/10;
		}
		if(n==c)
	          return 1;
		else
		  return 0;

	}

};

int main()
{
armstrong s;
ifstream obj2;
obj2.open("num.dat",ios::in);
ofstream obj1;
obj1.open("arm.dat");
int z;
cout<<"\n the armstrong no:'s are : \n";
while(!obj2.eof())
	{
	obj2>>s.n;
	z=s.arms();
		if(z==1)
		{
			s.display();
			obj1<<s.n*s.n;
			obj1<<endl;
		}
	}
		


obj2.close();
obj1.close();
}

