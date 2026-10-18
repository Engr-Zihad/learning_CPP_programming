#include <iostream>
#include <string>
using namespace std;
void fun() //by function 
{
    static int n=1;
    cout<<n<<endl;
    n++;
}
class ABC  //  by class 
{
    public :
    ABC ()
    {
        cout<<"Constructor"<<endl;
    }
     ~ABC ()
    {
        cout<<"destructor"<<endl;
    }
};
int main () {
        fun();
        fun();
        fun();
    if (true)
    {
       static ABC obj;
    }
    cout<<"END of  main function"<<endl;
        return 0;
    }
