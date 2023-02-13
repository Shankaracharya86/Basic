#include <iostream>
#include <cmath>

using namespace std;
int main()
{  
     float r,h,vol;

    cout<<"Enter radius and then height\n";
    cin>>r>>h;

    vol=3.14*r*r*h;

    cout<<"Volume of cylinder is "<<vol;

    return 0;
}