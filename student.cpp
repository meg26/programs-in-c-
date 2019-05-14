#include<fstream>
#include<iostream>
using namespace std;
class student
{
    int rollno,id,m1,m2,m3;
    char name[20];
    public:
       void getdata()
       {
           cout<<"\nEnter rollno:";
           cin>>rollno;
           cout<<"\nEnter id:";
           cin>>id;
           cout<<"\nEnter name:";
           cin>>name;
           cout<<"\nEnter marks of three sub:";
           cin>>m1>>m2>>m3;
       }
       void putdata()
       {
            cout<<"\nrollno:"<<rollno
                <<"\nid:"<<id
                <<"\nname:";
               puts(name);
               cout <<"\nmarks:"<<m1<<","<<m2<<","<<m3;
       }
};
int main()
{
    student s;
    ofstream obj("student.txt",ios::out);
    int cp;
   do
   {
             s.getdata();
             obj.write((char*)&s,sizeof(s));
             cout<<"\nDo you wanna enter more records?press1";
             cin>>cp;
   }while(cp==1);
    obj.close();
    ifstream obj1("student.txt",ios::in);
    obj1.read((char*)&s,sizeof(s));
    {
          while(!obj1.eof())
          {
              s.putdata();
               obj1.read((char*)&s,sizeof(s));
          }
    }
    obj1.close();
    return 0;
}

	

