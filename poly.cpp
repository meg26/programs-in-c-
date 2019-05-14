#include<iostream>
using namespace std;

class polygon
{

public:
int l,h;

	void read()
	{
		cout<<"\nenter the length and height :\n";
		cin>>l>>h;
	}
	
	virtual void area() 
	{
		cout<<"\narea of polygon \n";
	}
	
};

class triangle: public polygon
{
public:
	void area()
	{
		cout<<"\narea of triangle :"<<l*h*0.5;
	}
};

 class rectangle: public polygon
{
public:
	void area()
	{
		cout<<"\narea of rectangle :"<<l*h;
	}
};

int main()
{
int c;
polygon *p;
triangle t;
rectangle r;
while(1)
{
cout<<"\nchoose 1.triangle 2.rectangle 3.exit :";
cin>>c;
	if(c==1)
	{
		t.read();
		p=&t;
		p->area();
	}
	else if(c==2)
	{
		r.read();
		p=&r;
		p->area();
	}
	
	else
		break;
}
}
