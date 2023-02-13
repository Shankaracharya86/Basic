#include <iostream>
using namespace std;
int main()
{
    float a1,a2,a3,a4,a5,a6,total;
    cout<<"Enter all the bills"<<endl;cin>>a1>>a2>>a3>>a4>>a5>>a6;total=a1+a2+a3+a4+a5+a6;cout<<"total:"<<total<<endl;
    
    if(total>=2500 && total<=5000)
    {
        cout<<"You got 50 percent off and you have to pay: ";cout<<total-((50*total)/100)<<endl;
    }
    else if(total<2500 && total>=1000)
    {
        cout<<"You got 30 percent off and you have to pay: ";cout<<total-((30*total)/100)<<endl;
    }
    else
    {
        cout<<"No discount";
    }    
    return 0;
}