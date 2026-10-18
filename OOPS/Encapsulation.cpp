#include <iostream>
#include <cstring>
using namespace std;
// Enchapsulation is wraping up data and member in a single unit 
// help in data hiding 
class teacher {
    private :
    double salary ; // data hiding 
    
    public :
     teacher ()
    {
        cout<<"Computer science engimnering"<<endl;
    }
    int id ;
    string name ;
    string position ;
    
    void setsalary(double salary) //setter 
    {
        this->salary = salary  ;
    }
    
    double getsalary() //getter
    {
        return salary;
    }
};
int main ()
{
    teacher t1;
    t1.name = "ZIHAD";
    t1.id = 2602050;
    t1.position = "Professor";
    t1.setsalary(250000);
    cout<<"The name of the tacher is "<<t1.name<<endl
        <<"id is "<<t1.id<<endl
        <<"position is "<<t1.position<<endl
        <<"salary is "<<t1.getsalary();
 
    return 0;
        
    
}
