#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2;
    cout<<"Enter 3 nos";
    cin>>a>>b>>c;
    
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        cout<<"Roots are real and equal "<<endl;
        cout<<-b/(2*a)<<endl;
    }
    else if(d>0)
    {
        cout<<"Roots are real and unequal "<<endl;
        cout<<-b+sqrt(d)/(2*a)<<" =r1"<<endl;
        cout<<-b-sqrt(d)/(2*a)<<" =r2"<<endl;
    }
    else
    {   cout<<"Roots are imaginary "<<endl;
    }
return 0;
}