#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int> vec1 = { 5,67,7,8,6,65};
    vector <int> vec(5,-1);
  //  vector<int> :: reverse_iterator it;    //iterator 
    vec.push_back(93);
    vec.push_back(9);
    vec.push_back(44);
    vec.push_back(23);
    vec.push_back(933);
    vec.push_back(02);
    vec.push_back(4323);
    vec.push_back(23);
    vec.push_back(100);
    vec.emplace_back(6);
    vec.insert(vec.begin(),100);
    vec.pop_back();      // last index delete

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.erase (vec.begin()+1,vec.begin()+3);
   
   
    // for (int val : vec)
    //     {
    //         cout<<val<<" ";
    //     }
    for (auto it = vec.rbegin(); it!= vec.rend();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<vec[8]<<"  or  "<<vec.at(8)<<endl;
    cout<<"first "<<vec.front()<<endl;
    cout<<"last "<<vec.back()<<endl;
     cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.clear();
    cout<<"IS vector is empty = "<<vec.empty();
   
    
   
    return 0;
}
