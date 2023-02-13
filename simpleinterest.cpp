#include <iostream>
#include <cmath>
using namespace std;
int main()
{   float p,r,t,SI;

    cout<<"Enter principle,rate and time in years\n";
    cin>>p>>r>>t;
    
    SI=(p*r*t)/100;

    cout<<"Simple interest is "<<SI;

    return 0;




}