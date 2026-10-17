#include<iostream>
using namespace std;
class info 
{
    public :
    int id ;
    char name [100];
    void display()
{
    cout<<id<<endl<<name ;
}
};

int main ()
{
  info s1{2602050, "Ziaad"};
    s1.display();
    return 0;
}
