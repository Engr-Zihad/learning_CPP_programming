#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    int tableA[10];
    int tableB[10];
    int tableAB[10];
    cout<<"Enter first table :";
    cin>>a;
    cout<<"Enter second table :";
    cin>>b;
    for(int i=0;i<10;i++)
        {
        tableA[i] = (i+1)*a;
        }
     for(int i=0;i<10;i++)
        {
        tableB[i] = (i+1)*b;
        }
    for(int i=0;i<10;i++)
        {
            tableAB[i]= tableA[i]*tableB[i];
            cout<<tableAB[i]<<endl;
        }
    
    return 0;
}
