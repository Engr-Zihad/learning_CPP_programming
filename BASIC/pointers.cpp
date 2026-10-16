#include<iostream>
using namespace std;
int main ()
{
    int a = 10;
    int *b = &a;
    int **c = &b;
    // Adress
    cout<<"adress of a " <<&a<<endl;
    cout<<"adress of a " <<b<<endl;
    cout<<"adress of b " <<c<<endl;
    cout<<"adress of b " <<&b<<endl;
    cout<<"adress of c " <<&c<<endl;
    // value 
    cout<<"value of a " <<a<<endl;
    cout<<"value of b " <<*b<<endl;
    cout<<"value of b " <<**c<<endl;
    
    return 0;
}
