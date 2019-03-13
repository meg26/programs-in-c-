#include<iostream>
using namespace std;

class Fibo
{
 int a,b,c,i;
 public:
  void fibo(int n)
  {
    a=0,b=1;
    cout<<" "<<a<<"   "<<b;
    for(i=0;i<n-2;i++)
    {
     c=a+b;
     cout<<"   "<<c;
     a=b;
     b=c;
    }
   }
  };

int main()
{
 Fibo f;
 int n;
 cout<<"enter the limit";
 cin>>n;
 f.fibo(n);
}
    
   
