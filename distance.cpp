#include <iostream>
using namespace std;
int main()
{     
    float u,v,d,a;

    cout<<"Initial velocity u ";
    cin>>u;
    cout<<"Final velocity v ";
    cin>>v;
    cout<<"Enter a in m/(s*s)";
    cin>>a;

    d=(v*v-u*u)/(2*a);

    
    cout<<"Distance is "<<d<<"m";

    return 0;
}