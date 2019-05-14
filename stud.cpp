#include<iostream>
#include<fstream>
using namespace std;

class students
{
	int st_id,rollno,mark1,mark2,mark3;
	char name[20];
public:
	
	void read()
	{
		cout<<"\nenter name :";
		cin>>name;
		cout<<"enter student id :";
		cin>>st_id;
		cout<<"enter rollno :";
		cin>>rollno;
		cout<<"enter mark1 :";
		cin>>mark1;
		cout<<"enter mark2 :";
		cin>>mark2;		
		cout<<"enter mark3 :";
		cin>>mark3;
	}


	void display()
	{
		cout<<"\nname :"<<name<<"\nstudent id :"<<st_id<<"\nrollno :"<<rollno<<"\nmark1 :"<<mark1;
		cout<<"\nmark2 :"<<mark2<<"\nmark3 :"<<mark3;
	}

};

int main()
{
students s;
ofstream obj1;
obj1.open("student.txt");

char op;
do
{
	s.read();
	obj1.write((char*)&s, sizeof(s));
	cout<<"\nread more (y/n) ";
	cin>>op;
}while(op=='y');

obj1.close();


ifstream obj2;
obj2.open("student.txt",ios::in);
obj2.read((char*)&s, sizeof(s));

while(!obj2.eof())
{
	s.display();
	obj2.read((char*)&s, sizeof(s));
}

obj2.close();
}


