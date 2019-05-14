#include<iostream>
using namespace std;

class Matrix
{
        int a[10][10],m,n;
    public:
        void accept();
        void display();
        void operator +(Matrix x);
};
void Matrix::accept()
{
        cout<<"\n Enter no of rows of matrix: ";
        cin>>m;
        cout<<"\n Enter no of columns of matrix: ";
        cin>>n;
        cout<<"\n Enter elements \n";
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix::operator +(Matrix x)
{
        int mat[m][n];
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        mat[i][j]=a[i][j]+x.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<m; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cout<<mat[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
int main()
{
        Matrix m,n;
        m.accept();       
        n.accept();    
        cout<<"\n First Matrix : \n\n";
        m.display();   
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        m+n;       
        return 0;
}
