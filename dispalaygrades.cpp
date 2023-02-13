#include <iostream>
using namespace std;
int main()
{
    int m1,m2,m3,total;float avg;
    cout<<"*********************Marks of Student******************"<<endl;
    cout<<"Enter three marks ";cin>>m1>>m2>>m3;
    total=m1+m2+m3;cout<<"Total marks:"<<total<<endl;avg=total/3.0;cout<<"Percentage:"<<avg<<endl;
    if(avg>=60){
        cout<<" Grade A ";
    }
    else if(avg>=35 && avg<60){
        cout<<" Grade B";
    }
    else{
        cout<<" Grade C ";
    }
return 0;
}