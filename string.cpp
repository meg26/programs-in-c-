#include<iostream>
#include<stdio.h>                
#include<string.h>                         
using namespace std;

class String

{
  char str[20];

  public:

  void getdata()
  {
     gets(str);

  }

  int operator==(String s)
  {
    if(!strcmp(str,s.str))

    return 1;

    else

    return 0;

  }

};

int main()
{
  String s1,s2;
  cout<<"\nEnter first string:\n";
  s1.getdata();
  cout<<"\nEnter second string:\n";
  s2.getdata();
  if(s1==s2)                                  
  {              
   cout<<"\n Strings are equal \n";

  }
  else
  {
  cout<<"\n Strings are not equal \n";
  }

return 0;

}
