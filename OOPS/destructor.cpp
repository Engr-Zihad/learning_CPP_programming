#include <iostream>
#include <cstring>
using namespace std;
class student 
{
    public :
    string name ;
    double* cgpaptr ;
    student (string name , double cgpa)
    {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    void getinfo()
    {
        cout<<"Student name is "<<name<<endl
        <<"his cgpa is "<<*cgpaptr<<endl;
    }
    // destructor
    ~student ()
    {
        cout<<"I am destructor";
        delete cgpaptr;
    }
    
};
int main ()
{
    student s1("Zihad",3.98); 
    s1.getinfo();

    return 0;
}   









