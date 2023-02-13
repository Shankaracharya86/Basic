#include <iostream>
using namespace std;
int main()
{
    int a=-25,b;
    //If integer x is positive then(~) NOT of that integer is -(x+1)
    //i.e. x=5 then NOT of x is -(5+1)=-6
    //If integer x is negative then (~)NOT of that integer is (x-1)
    //i.e. x=5 then NOT of x is 5-1=4
    b=~a;
    cout<<b;
    return 0;
}