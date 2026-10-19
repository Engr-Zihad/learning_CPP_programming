#include <iostream>
#include<set>
#include<unordered_set>
using namespace std;
 
int main() {
    set<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(9);
    s.insert(6);
    s.insert(5);
    s.insert(9);
    cout<<"Size of set :"<<s.size()<<endl;
    cout<<"MAX capacit of set :"<<s.max_size()<<endl;
    cout<<"Lower bound of set :"<<*(s.lower_bound(6))<<endl;
    cout<<"Upper bound of set :"<<*(s.upper_bound(6))<<endl;
    for(auto val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"end of set"<<endl<<endl;

    multiset<int> ms;
    ms.insert(4);
    ms.insert(5);
    ms.insert(9);
    ms.insert(6);
    ms.insert(5);
    ms.insert(9);

    cout<<"Size of multiset :"<<ms.size()<<endl;
    cout<<"MAX capacity of multiset :"<<ms.max_size()<<endl;
    cout<<"Lower bound of multiset :"<<*(ms.lower_bound(6))<<endl;
    cout<<"Upper bound of multiset :"<<*(ms.upper_bound(6))<<endl;
    for(auto val : ms)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"end of multiset"<<endl<<endl;

    unordered_set<int> us;
    us.insert(4);
    us.insert(5);
    us.insert(9);
    us.insert(6);
    us.insert(5);
    us.insert(9);
    us.insert(6);
    us.insert(5);
    us.insert(9);

    cout<<"Size of unordered_set :"<<us.size()<<endl;
    cout<<"MAX capacity of unordered_set :"<<us.max_size()<<endl;
    for(auto val : us)
    {
        cout<<val<<" ";
    }
    cout<<endl<<"end of unordered_set"<<endl<<endl;

return 0;
 
}
