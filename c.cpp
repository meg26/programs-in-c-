#include<iostream>
using namespace std;
class Prime
 {
  int a,b;
  public:
  void prim(int a,int b)
   {
    while(a<b)
     {
      int flag=0;
      if(a==1)
       {
        flag=1;
       }
      for(int i=2;i<=(a/2);++i)
       {
        if(a%i==0)
         {
          flag=1;
          break;
         }
       }
      if(flag==0)
       {
        cout<<a<<" ";
       }
      ++a;
     }
   }
 };
int main()
 {
  int a,b;
  Prime s;
  cout<<"enter the lower limit";
  cin>>a;
  cout<<"enter the upper limit";
  cin>>b;
  s.prim(a,b);
  return 0;
 }
         
