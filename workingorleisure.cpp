#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"enter hour ";
    cin>>hour;

    if(hour>=9 && hour<=18) 
    {      
        
    
        cout<<"Working hour";
    }
      if(hour>24)
      {
               cout<<"PLease enter valid hours";
      }
    else      
    {
        cout<<"Leisure hour";
    }
return 0;

}