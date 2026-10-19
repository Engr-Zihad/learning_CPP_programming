#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool cmp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second<p2.second) {return true;}
    if(p1.second>p2.second) return false;
    if(p1.second==p2.second) 
    {
        if(p1.first<p2.first) return true;
        else return false;
    }

}
 
int main() {
    vector<pair<int,int>> v;
    v.insert(v.begin(), {1,2});
    v.emplace_back(3,4);
    v.push_back({5,6});

    sort(v.begin(), v.end(),cmp);
    for ( auto val : v)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"end of vector by sort"<<endl<<endl;

    reverse(v.begin(), v.end());
    for ( auto val : v)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"end of vector by reverse"<<endl<<endl;

    string s = "welcome";
    prev_permutation(s.begin(),s.end());
    cout<<"After previous permutation : "<<s<<endl;
    next_permutation(s.begin(), s.end());
    cout<<"After next permutation of string : "<<s<<endl;

    cout<<"Before reverse : "<<s<<endl;
    reverse(s.begin(), s.end());
    cout<<"After reverse : "<<s<<endl;

    cout<<"max of elements : "<<max({10, 83, 3123, 8443,643,643,654,6,547,547,547,56,756,7,32})<<endl;
    cout<<"min of elements : "<<min({10, 5646,45,65,476,547,54,754,63,54,24,3,54,235,43,43,50})<<endl;

    int a =10, b = 20;
    cout<<"Before swap : "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swap : "<<a<<" "<<b<<endl;

    vector <int> v1 = {1,2,3,4,5,6,7,8,9};
    max_element(v1.begin(), v1.end());
    min_element(v1.begin(), v1.end());
    cout<<"Max element : "<<*(max_element(v1.begin(), v1.end()))<<endl;
    cout<<"Min element : "<<*(min_element(v1.begin(), v1.end()))<<endl;
    cout<<binary_search(v1.begin(), v1.end(),4)<<endl;
    cout<<binary_search(v1.begin(), v1.end(),10)<<endl;

    int z = 15 ;
    long z2 = 31 ;
    long long z3 = 63 ;

    cout<<__builtin_popcount(z)<<endl;
    cout<<__builtin_popcountl(z2)<<endl;
    cout<<__builtin_popcountll(z3)<<endl;
    return 0;
 
}
