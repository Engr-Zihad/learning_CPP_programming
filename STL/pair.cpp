#include <iostream>
#include <vector>
#include<cstring>
using namespace std;
 
int main() {
   pair <int , pair<string , float>> p = {2602050, {"ZIHAD", 3.98}};
   cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

   vector<pair<int, pair<char, float>>> vec;
    vec.push_back({1, {'A', 3.98}});
    vec.push_back({2, {'B', 4.98}});
    vec.push_back({3, {'C', 5.98}});
    vec.emplace_back(4, make_pair('D', 6.98));
    for (pair<int, pair <char, float>> p : vec)
    {
        cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
    }

return 0;
 
}
