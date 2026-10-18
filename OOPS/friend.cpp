#include <iostream>
using namespace std;
class y;
class x
{
int val;
public:
    x(int n)
    {
        val = n; 
    }

    friend int sum(x a, y b);     
};

class y 
{
int val;
public:
    y(int n) 
    { 
        val = n; 
    }

    friend int sum(x a, y b);
};
int sum(x a, y b)
{               
    
    return a.val + b.val;       
  
    
}

int main() {
    x x1(2);
    y y1(8);
    
    cout << "sum = " << sum(x1, y1) << endl;
    return 0;
}
