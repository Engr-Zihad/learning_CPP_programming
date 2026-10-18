#include<iostream>
using namespace std;
template <class t1, class t2>
class sum 
{
    public :
    t1 val1;
    t2 val2;
    sum (t1 x , t2 y )
    {
        val1 = x ;
        val2 = y ;
    }
    void displaysum ()
    {
        cout<<"The sum is "<<val1+val2;
    }
};
int main ()
{
    sum<int , char > z(3,'a');
    z.displaysum();
    return 0;
}
