#include<iostream>
using namespace std;

 class Reverse
{
 int n;
 public :
 void palin()
 {
	cout<<"enter the number :";
	cin>>n;
 }
 void rev()
 {
	int i,r=0;
	i=n;
	while(i!=0)
	{
		r=(r*10)+(i%10);
		i=i/10;
	}
 	if(r==n)
	cout<<"no is palindrome \n";
	else
	cout<<"no is not palindrome \n";
 }
};

int main()
{
Reverse R;
R.palin();
R.rev();
}
