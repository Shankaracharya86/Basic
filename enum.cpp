#include <iostream>
using namespace std;
enum day{mon,tue,wed=9,thu,fri,sat,sun};
int main()
{
    day d;

    d=sun;
    cout<<d;
    return 0;
}