#include<iostream>
using namespace std;
int main ()
{
    int i = 11;
    int a;
    cout<<"Enter age :";
    cin>>a;
  // selection or sequance of if 
    if (a<18 && a>0)
    {
        cout<<"you can't come to the party \n";
    }
   else if (a<=0)
    {
        cout<<"wrong information \n";
    }
    else if (a==18)
    {
        cout<<"you need pass to enter the party \n";
    }
    else {
        cout<<"you come to the party \n";
    }
    // selection or sequance of switch
    switch (a)
        {
            case 18:
                {
                    cout<<"you need pass \n";
                    break;
                }
            case 0:
                {
                    cout<<"you are not born  \n";
                    break;
                }
            default :
                {
                cout<<"I don't know \n";
                break;
                }
        }
  //for loop
    for (int i = 1; i<=10 ; i++)
        {
            cout<<i<<endl;
        }
  //while loop
    while (i<=20){
        cout<<i<<endl;
        i++;
    }
  //do while loop
    do {
        cout<<i<<endl;
        i++;
    }while (i<=30);
    
    return 0;
}
