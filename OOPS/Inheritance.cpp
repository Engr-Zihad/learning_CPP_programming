#include <iostream>
#include <string>
using namespace std;
class person 
{
    public :
    string name ;
    string age ;
    string dept;
    person (string name , string age , string dept)
    {
        this-> name = name;
        this->age = age ;
        this -> dept = dept ;
    }
};
class student : public person 
{
    public :
    double cgpa;
    student (string name , string age , string dept,double cgpa) : person(name,age,dept)
    {
        this ->cgpa = cgpa;
    }
};
class TA : public student
{
    public :
    string uni;

    TA (string name , string age , string dept,double cgpa,string uni) : student (name,age,dept,cgpa)
    {
        this ->uni = uni;
    }
        void getinfo()
{
    cout<<name<<endl<<age<<endl<<dept<<endl<<cgpa<<endl<<uni;
}
};
int main ()
{
    TA t1("Zihad","never","CSE",3.98,"HSTU");
    t1.getinfo();
}









