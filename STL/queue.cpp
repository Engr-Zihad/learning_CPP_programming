#include <iostream>
#include <queue>
using namespace std;

 
int main() {

    queue <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    // cout<<s.front()<<endl;
    // s.pop();
    // cout<<s.back()<<endl;
    cout<<"Size of queue 1: "<<s.size()<<endl;
    queue <int> s1;
    s1.swap(s);
    cout<<"Size of queue 1: "<<s.size()<<endl;
    cout<<"Size of queue 2: "<<s1.size()<<endl;
  while(!s1.empty())
  {
      cout<<s1.front()<<endl;
      s1.pop();
  }
   cout<<"Size of queue 1: "<<s.size()<<endl;
   cout<<"Size of queue 2: "<<s1.size()<<endl;
return 0;
 
}
