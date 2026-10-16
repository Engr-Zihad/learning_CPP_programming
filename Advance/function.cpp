#include <iostream>
using namespace std;
int fib(int m);
int sum ( int x , int y);
int factorial (int n);
int main ()
{
    int a,b,c,d;
    cout<<"Enter four number :";
    cin>>a>>b>>c>>d;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum(a,b)<<endl;
    cout<<"The fibonacci of "<<c<<" is "<<fib(c)<<endl;
    cout<<"The factorial of "<<d<<" is "<<factorial(d);
    return 0;
    
}
int sum ( int x , int y)
{
return (x+y);
}
int fib(int m)
{
    if(m<=1)
    {
        return 1;
    }
    return (fib(m-1)+fib(m-2));
} 
int factorial (int n)
{
    if (n<=1)
    {
        return 1;
    }
    return (n*factorial(n-1));
}
