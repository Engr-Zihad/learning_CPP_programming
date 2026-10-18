#include <iostream>
#include <string>
using namespace std;
class shape // abstract class 
{
    virtual void draw() = 0 ; // pure vitual function 
};
class square : public shape
{
    public :
    void draw ()
    {
        cout<<"This is a squar";
    }
};
int main ()
{
    square s1;
    s1.draw();
    return 0;
}
    








