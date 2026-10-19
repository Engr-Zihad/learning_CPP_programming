#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;
 
int main() {

    map<string , int> z;
    z["tv"] = 100;
    z["mobile"] = 200;
    z["internet"] = 150;
    z["laptop"] = 300;
    z.insert({"headphone", 400});
    z.emplace("earphone", 500);
    z.erase("internet");
    cout<<"Size of map: "<<z.size()<<endl;
    cout<<"max capacity of map: "<<z.max_size()<<endl;
    for(auto val : z)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<z.count("tv")<<endl;
    if (z.find("internet") != z.end())
    {
        cout<<"Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }

    cout<<"end of map"<<endl<<endl;

    multimap<string , int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 200);
    m.emplace("mobile", 200);
    m.emplace("internet", 150);
    m.insert({"laptop", 300});
    m.erase("mobile");
    for(auto val : m)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"end of multimap"<<endl<<endl;

    unordered_map<string, int> u;
    u["tv"] = 100;
    u["mobile"] = 200;
    u["internet"] = 150;
    u["laptop"] = 300;
    u.insert({"headphone", 400});
    u.emplace("earphone", 500);
    u.erase("internet");
    cout<<"Size of unordered_map: "<<u.size()<<endl;
    for(auto val : u)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<"end of unordered_map"<<endl<<endl;
return 0;
 
}
