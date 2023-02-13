#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter day:";
    cin>>day;
    if(day==1){
        cout<<"Sunday"<<endl;
    }
    else if(day==2){
        cout<<"Monday";
    }
    else if(day==3){
        cout<<"Tuesday";
    }
    else if(day==4){
        cout<<"Wednesday";
    }
    else if(day==5){
        cout<<"thursday";
    }
    else if(day==6){
        cout<<"friday";
    }
    else if(day==7){
        cout<<"saturday";
    }
    else{
        cout<<"Invalid";
    }
return 0;
}