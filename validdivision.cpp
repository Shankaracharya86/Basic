#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter two numbers";
    cin>>x>>y;

    if(y==0)
    {
        cout<<"divion not possible";
    }
  
    z=x/y;
    cout<<z;
    return 0;

}