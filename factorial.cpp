#include <iostream>
using namespace std;
int main()
{
    double i=1,fact=1,n;
    cout<<"Enter n:";cin>>n;
    for(i;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
return 0;
}