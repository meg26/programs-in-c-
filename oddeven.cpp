#include<iostream>
using namespace std;

class Even
{
 int r;
 public:
  void check(int n)
  {
   if(n%2==0)
   cout<<"the given no is even"; 
   else
   cout<<"the given no is odd";
  }
};
   int main()
   {
     int n;Even c;
     cout<<"enter the no";
     cin>>n;
     c.check(n);
     return 0;
   }
     
