#include <iostream>
using namespace std;
int main()
{
    unsigned long n,r,rev=0;
     cout<<"Enter n:";cin>>n;
     while(n>0)
     {
         r=n%10;
         n=n/10;
         rev=rev*10+r;
        
     }
      cout<<"The reverse is: "<<rev<<endl;

}