#include<iostream>
using namespace std;
class Employee
{
   protected:
      char name[20];  
      int exp;
      int salary;
   public:
      void get()
      {
          cout<<"\nEnter name:";
          cin>>name;
          cout<<"\nEnter exp:";
          cin>>exp;
          cout<<"\nEnter salary:";
          cin>>salary;
      }
     
};
class Department:public Employee
{
     public:
           char dept_name[20];
           void read()
           {
               cout<<"\nEnter Department name:";
               cin>>dept_name;
           }
};
class Senior:public Department
{
    public:
      void show()
     {
      if(exp>10)
      {
          cout<<"\nName:"<<name
              <<"\nExp:"<<exp
              <<"\nSalary:"<<salary
              <<"\nDepartment name:"<<dept_name;
      }}

};
int main()
{
   int i;
   Senior s[5];
   cout<<"\nEmployee details";
   for(i=0;i<5;i++)
        s[i].get();
   for(i=0;i<5;i++)
        s[i].read();
   for(i=0;i<5;i++)
        s[i].show();
   return 0;
}
