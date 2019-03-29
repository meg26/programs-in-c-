#include<iostream>
using namespace std;
class Shape
{
public:
	int b,h,l;
	void getdata()
	{
		cout<<"Enter breadth:";
		cin>>b;
		cout<<"Enter height:";
		cin>>h;

	}
	
};
class Rectangle:public Shape
{
public:
    
    int area1;
    void disp1()
    {
	
	
	area1=h*b;
	cout<<"Area of rectangle is:"<<area1<<endl;
    }

};
class Triangle:public Shape 
{
public:
    float area2;
    void disp2()
    {
	area2=0.5*b*h;
	cout<<"Area of triangle is:"<<area2<<endl;
    }

};
int main()
{
	Triangle T;
	Rectangle R;
	int ch;
while(1)
{
cout<<"choose 1. triangle 2.rectangle 3.exit";
cin>>ch;



if(ch==1)
{
	T.getdata();
	T.disp2();
}
else if(ch==2)
{
	
        R.getdata();
	R.disp1();
}
else
	break;
}
	return 0;
}

