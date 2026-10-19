#include <iostream>
#include <queue>
using namespace std;

 
int main() {

    priority_queue <int, vector <int> , greater<int>> s;
    s.push(585);
    s.push(3);
    s.push(100);
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    cout<<"Size of priority queue 1: "<<s.size()<<endl;
    priority_queue <int , vector <int> , greater<int>> s1;
    s1.swap(s);
    cout<<"Size of priority queue 1: "<<s.size()<<endl;
    cout<<"Size of priority queue 2: "<<s1.size()<<endl;
  while(!s1.empty())
  {
      cout<<s1.top()<<endl;
      s1.pop();
  }
   cout<<"Size of priority queue 1: "<<s.size()<<endl;
   cout<<"Size of priority queue 2: "<<s1.size()<<endl;
return 0;
 
}
