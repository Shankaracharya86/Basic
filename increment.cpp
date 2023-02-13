#include <iostream>
using namespace std;
int main()
{     
    float u,v,d,a;

    cout<<"Enter u ";
    cin>>u;
    cout<<"Enter v ";
    cin>>v;
    cout<<"a";
    cin>>a;

    d=(v*v-u*u)/(2*a);

    
    cout<<"Distance is "<<d<<"km";

    return 0;
}