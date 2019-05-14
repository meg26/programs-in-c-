#include<iostream>
using namespace std;

class side
{
protected:
int s;

public:
void read()
{
cout<<"enter side :";
cin>>s;
}
};

class square : public side 
{
public:
void display()
{
cout<<"square "<<s*s;
}
};

class cube : public side 
{
public:
void display()
{
cout<<"cube "<<s*s*s;
}
};

int main()
{
square s; 
cube c;
int ch;
while(1)
 {
 	cout<<"\nchoose 1.square 2.cube 3.exit :";
	cin>>ch;
	if(ch==1)
	{
	s.read();
	s.display();
	}
	else if (ch==2)
	{
	c.read();
	c.display();
	}
	else
		break ;
 }
}
	

