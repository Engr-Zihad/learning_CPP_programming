#include <iostream>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    deque<char>::reverse_iterator it;
    deque<char> d;
    d.push_back('B');
    d.push_back('C');
    d.push_front('A');
    cout << "size of deque = " << d.size() << endl;
    cout << "capacity of deque = " << d.max_size() << endl;

    for (it = d.rbegin(); it != d.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    d.erase(d.begin());
    cout << "size of deque = " << d.size() << endl;
    cout << "capacity of deque = " << d.max_size() << endl;

    return 0;
}
