#include <iostream>
#include<list>
#include <iterator>
using namespace std;
 
int main() {
    list <int > :: reverse_iterator it;
    list <int> l;
    l.push_back(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(4);
    l.insert(l.end(),4);
    l.erase(next(l.begin(), 3), l.end());
    for(it = l.rbegin() ; it != l.rend();it++)
     {
        cout<<*it<<" " ;
     }
 
return 0;
 
}
