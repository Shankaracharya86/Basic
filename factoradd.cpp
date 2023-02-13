#include <iostream>
using namespace std;
int main()
{
    int n,i=1,sum=0;
    cout<<"Enter n:";cin>>n;
    for(i;i<=n;i++)
    {
      { if(n%i==0)
        cout<<"The factors are:"<<i<<endl;
         if(n%i==0)
        sum=sum+i;
        }
    }
    
    cout<<"The sum of factors is "<<sum;
return 0;
}