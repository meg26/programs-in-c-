#include<iostream>
using namespace std;
class Account
{
public:
	char custname[100];
	int accno;
	void getdata()
	{
		cout<<"Enter name:";
		cin>>custname;
		
		cout<<"Enter account number";
		cin>>accno;
	}
	
	
};
class cur_acc:public Account
{
 public:
 	int dep,bal;
 	float intrate=0.03;


 	void getdatacur()
 	{
 		cout<<"Enter deposit";
 		cin>>dep;
 		bal=dep+(intrate*dep);	
 	}
 	void dispcur()
 	{
 		cout<<"Customer name:"<<custname<<endl;
 		cout<<"Balance:"<<bal<<endl;
 	}
       void withcur()
 	{      int w;
 		cout<<"Amount to withdraw:";
	        cin>>w;
	        if(bal>w)
	         {
                   cout<<"Successful";
	           bal=bal-w;
 		cout<<"Balance:"<<bal<<endl;
                  }
	     else {
		cout<<"Unsuccessful";
	        cout<<"Balance="<<bal;
                } 
            }	
	
	
	
};

class sav_acc:public Account
{
 public:
 	int dep1,bal1;
 	float intrate1=0.05;

 	void getdatasav()
 	{
 		cout<<"Enter deposit";
 		cin>>dep1;
 		bal1=dep1+(intrate1*dep1);

 		
 	}
 	void dispsav()
 	{
 		cout<<"Customer name:"<<custname<<endl;
 		cout<<"Balance:"<<bal1<<endl;
 	}
	void withsav()
 	{ int w1;
 		cout<<"Amount to withdraw:";
	        cin>>w1;
	        if(bal1>w1)
	         {
                   cout<<"Successful";
	           bal1=bal1-w1;
 		cout<<"Balance:"<<bal1<<endl;
                  }
	     else {
		cout<<"Unsuccessful";
	        cout<<"Balance="<<bal1;
                } 	
}

	
	
	
	
	
};
int main()
{
cur_acc c;
sav_acc s;
int ch,ch1;
while(1)
{
cout<<"choose 1.current 2.saving 3.exit";
cin>>ch;
	if(ch==1)
{
	c.getdata();
	

	while(1)
	{
	cout<<"choose 1.deposit 2.withdraw 3.exit";
	cin>>ch1;
		if(ch1==1)
		{
		c.getdatacur();
		c.dispcur();
		}
		else if(ch1==2)
		{
		c.withcur();
		c.dispcur();
		}
		else
		break;
	}
}
	else if(ch==2)
{
	s.getdata();
	

	while(1)
	{
	cout<<"choose 1.deposit 2.withdraw 3.exit";
	cin>>ch1;
		if(ch1==1)
		{		
		s.getdatasav();
		s.dispsav();
		}
		else if(ch1==2)
		{		
		s.withsav();
		s.dispsav();
		}
		else
		break;
	}
}
	else
	break;
}
}

