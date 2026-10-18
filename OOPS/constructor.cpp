#include <iostream>
#include <cstring>
using namespace std;
// deep copy
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
    student ( student &real)
    {
        this -> name = real.name ;
        cgpaptr = new double;
        *cgpaptr = *real.cgpaptr;
    }
    void getinfo()
    {
        cout<<"Student name is "<<name<<endl<<"his cgpa is "<<*cgpaptr<<endl;
    }
    
};
// shallo copy
 class teacher {
    private :
    double salary ; 
    
    public :
    teacher () //non parameter
    {
        cout<<"CSE";
    }
    
     teacher (int id,string name, string position,double salary) 
    // parameter
    {
        // this for object property
       this-> id = id;
       this-> name = name;
       this-> position = position;   // constructor parameter 
       this -> salary = salary ;
    }
    teacher (teacher &real)  // copy constructor  && shallow copy
    {
        cout<<"I am copy constructor"<<endl;
        this-> id = real.id;
       this-> name = real.name;
       this-> position = real.position;   // constructor parameter 
       this -> salary = real.salary ;
        
    }
    int id ;
    string name ;
    string position ;
    
    void getinfo()
    {
        cout<<"The name of the tacher is "<<name<<endl
        <<"id is "<<id<<endl
        <<"position is "<<position<<endl
       <<"salary is "<<salary<<endl<<endl<<endl;
    }
};
int main ()
{
    teacher t1(2602050,"ZIHAD","professor",250000);
    teacher t2(t1);
    t2.getinfo(); // default copy constructor  invok && shallow copy
    // deep copy 
    student s1("Zihad",3.98); 
    student s2(s1);
    *(s2.cgpaptr)=4.00;
    s1.getinfo();

    return 0;
}  
