#include <iostream>
using namespace std;
int main()
{
    double i=1,n,sum=0;
    cout<<"Enter n: ";cin>>n;cout<<endl;
    for(i;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of n natural no is:"<<sum<<endl;
    return 0;
}