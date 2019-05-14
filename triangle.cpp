#include<iostream>
#include<math.h>
using namespace std;
class over
{
 float area,s;
 public:
 void triangle(int s1,int s2,int s3)
 {
   if(s1==s2&&s2==s3)
   {
    cout<<"\nIt is an equilateral triangle";
    area=s1*(1.71/4);
    cout<<"\narea= "<<area;
   }
  else  
   if((s1*s1)==((s2*s2)+(s3*s3)))
    {
     cout<<"\nIt is a right triangle";
     area=0.5*s2*s3;
     cout<<"\narea= "<<area;
    }
  else
   if((s2*s2)==((s1*s1)+(s3*s3)))
    {
     cout<<"\nIt is a right triangle";
     area=0.5*s1*s3;
     cout<<"\narea= "<<area;
    }  
  else
   if((s3*s3)==((s2*s2)+(s1*s1)))
     {
      cout<<"\nIt is a right triangle";
      area=0.5*s2*s1;
      cout<<"\narea= "<<area;
     }
  else
   {
    cout<<"\nIt is a scalene triangle";
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<"\nArea= "<<area;
   }
 }
};
int main()
{
 int a,b,c;
 over o;
 cout<<"Enter sides of triangle";
 cout<<"\nSide1";
 cin>>a;
 cout<<"\nSide 2";
 cin>>b;
 cout<<"\nSide 3";
 cin>>c;
 o.triangle(a,b,c);
}
