#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1,x2,y1,y2,dist;
    cout<<"Enter points x1,x2 and y1,y2\n";
    cin>>x1>>x2>>y1>>y2;

    dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<"The distance is "<<dist;
    return 0;
}