#include<iostream>
#include<math.h>
using namespace std;

 class triangle
{
 
 public:
 float ar;
 float s,a;
 void area(int l, int b)
 {
	ar=(l*b)*.5;
 }

 void area(int a)
 {
	ar=0.433*a*a;
 }
 
 void area(int p,int q, int r)
 {	
	s=(p+q+r)*.5;
	a=s*(s-p)*(s-q)*(s-r);
	cout<<"\n"<<a;
	ar=sqrt(a);
 }
 
 void display()
 {
	cout<<"\narea :"<<ar;
 }

};

 int main()
{
 triangle t;
 int a,b,c,d;
 while(1)
 {
 	cout<<"\nchoose 1.right triangle 2.equilateral triangle 3.scalane triangle :";
	cin>>c;
	if(c==1)
	{
		cout<<"\nenter length and breadth ";
		cin>>a>>b;
		t.area(a,b);
		t.display();
	}
	else if(c==2)
	{
		cout<<"\nenter side :";
		cin>>a;
		t.area(a);
		t.display();
	}
	else if(c==3)
	{
		cout<<"\nenter sides :";
		cin>>a>>b>>c;
		t.area(a,b,c);
		t.display();
	}
	else
		break;
 }
}


