#include <iostream>
using namespace std;
int main()
{
    int n,i=1;
    cout<<"Enter n:";cin>>n;
    for(i;i<=n;i++)
    {
       if(n%i==0)
         cout<<"Factor of "<<n<<" is "<<i<<endl;
    }
return 0;
}