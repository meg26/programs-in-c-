

#include<iostream>
using namespace std;  

 class student 
{ 
      protected:      
            int  roll_number;      
      public: 
            void get_number()      
  { 
		cin>>roll_number;
               
  } 
            void put_number()      
  { 
                  cout<<"Roll No:"<<roll_number<<"\n";      
  } 
}; 


 class test : public student 
{ 
      protected:      
            float mark1, mark2;      
	public: 
            void get_marks() 
  { 
                 cin>>mark1;     
                 cin>>mark2;    
  } 
            void put_marks(void)      
  { 
                  cout<<"Marks obtained"<<"\n"<<"mark1 ="<<mark1<<"\n"  <<"mark2 ="<<mark2<<"\n";      
  } 
}; 
class sports 
{ 
      protected:      
            float score;      
public: 
            void get_score()      
  { 
                  cin>>score;      
  } 
            void put_score()   
                                                                   
  { 
                  cout<<"Sports score:"<<score<<"\n\n";      
  } 
}; 


class result : public test, public sports 
{ 
            float total;      
      public:      
             void display();      
}; 


void result ::display() 
{ 
      int sum;
      sum=mark1+mark2;
      total = mark1 + mark2 + score; 
      put_number();      
      put_marks();      
      put_score();
      cout<<"sum of 2 marks : "<<sum<<endl;      
      cout<<"Total Score:"<<total<<"\n";      
} 



int main() 
{ 
      result  student_1;
      cout<<"enter the roll no: ";     
      student_1.get_number ();      
      cout<<"enter the mark1  and mark2 :"; 
      student_1.get_marks ();
      cout<<"enter the score";
      student_1.get_score ();   
      student_1.display() ;     

}                                                                 


