#include <iostream>
using namespace std;
double r,d,area;
int main()
{
    cin>>r>>d;
    area=3.141592654*(r-d/2)*(r+d/2);
    cout<<area<<endl;
    return 0;
}
