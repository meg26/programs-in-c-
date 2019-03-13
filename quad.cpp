#include<iostream>
#include<math.h>
using namespace std;

 class quadratic
{
 int a,b,c;
 float x1,x2;
 public :

 void read()
 {
	cout<<"enter the coefficient for x^2 :";
	cin>>a;
	cout<<"enter the coefficient for x :";
	cin>>b;
	cout<<"enter the constant :";
	cin>>c;
 }
 void root()
 {	
    float d,img,real;
    d = b*b - 4*a*c;
    
    if (d > 0) 
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and distinct" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (d == 0) 
    {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(d)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else 
   {
        real = -b/(2*a);
        img =sqrt(-d)/(2*a);
        cout << "Roots are complex "<< endl;
        cout << "x1 = " << real<< "+" << img << "i" << endl;
        cout << "x2 = " << real<< "-" << img << "i" << endl;
    }	


	

 }

};

int main()
{
quadratic q;
q.read();
q.root();

}
