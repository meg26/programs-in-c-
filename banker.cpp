#include<iostream>
using namespace std;

 class count
{
 int x;
 public:
 count(): x(0)
 {
 }
 
 void display()
 {
 cout<<"bankers : "<<x;
 }

 void operator ++()
 {
	x++;
 }

 void operator --()
 {
	x--;
 }
};

int main()
{
int bankers,k=1;
count c;
while(k==1)
{
cout<<"do you want to enter bankers :(yes:1 || no :0)";
cin>>k;
if(k==1)
++c;
cout<<"do you want to exit bankers :(yes:1 || no :0)";
cin>>k;
if(k==1)
--c;
cout<<"do you want to display bankers :(yes:1 || no :0)";
cin>>k;
if(k==1)
c.display();
cout<<"\ndo you want to continue :(yes:1 || no :0)";
cin>>k;
}

}

