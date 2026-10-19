#include <iostream>
#include <stack>
using namespace std;

 
int main() {

    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    cout<<"Size of stack 1: "<<s.size()<<endl;
    stack <int> s1;
    s1.swap(s);
    cout<<"Size of stack 1: "<<s.size()<<endl;
    cout<<"Size of stack 2: "<<s1.size()<<endl;
  while(!s1.empty())
  {
      cout<<s1.top()<<endl;
      s1.pop();
  }
   cout<<"Size of stack 1: "<<s.size()<<endl;
   cout<<"Size of stack 2: "<<s1.size()<<endl;
return 0;
 
}
