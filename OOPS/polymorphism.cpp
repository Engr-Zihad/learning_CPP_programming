#include <iostream>
#include <string>
using namespace std;

class person 
{
    public :
    string name ;
    int n;
    person ()
        {
        cout<<"I am from nonperameter\n";
        }
        person (string name)
        {
            this-> name = name ;
            cout<<"I am from perameter\n";
        }

    void show()
    {
        cout<<"From non perameter\n";
    }
    void show (int n)
    {
        cout<<"from perameter\n";
    }
    virtual void getinfo ()
    {
        cout<<"I am from base function\n";
    }
};
 class child : public person 
    {
        public :
        void getinfo ()
        {
            cout<<"I am from child\n";
        }
    };
        int main ()
        {
           // compile time 
            person p1;
           p1.show(1);
         //    run time or inheritance 
            child p2;
             person* ptr = &p2;
             ptr->getinfo(); 
            return 0;
        }








