#include<iostream>
using namespace std;
int a = 100;
int main ()
{
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    cout<<"the add is "<<a+b<<endl;
    cout<<"the sub is "<<a-b<<endl;
    if(b>0)
    {
        cout<<"the div is "<<a/b<<endl;
    }
    else 
    {
        cout<<"a is not divisible by b"<<endl;
    }
    cout<<"the mult is "<<a*b<<endl;
    cout<<"the global "<<::a;
    return 0;
}
