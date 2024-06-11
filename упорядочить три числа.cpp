#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if((x<=y && x<=z)&&(y<=z))//x<y<z
    {
        cout<<x<<" "<<y<<" "<<z;
    }
    else if((x<=y && x<=z)&&(z<=y))//x<z<y
    {
        cout<<x<<" "<<z<<" "<<y;
    }
    else if ((z<=y && z<=x)&&(y<=x))//z<y<x
    {
        cout<<z<<" "<<y<<" "<<x;
    }
    else if ((y<=z && y<=x)&&(z<=x))//y<z<x
    {
        cout<<y<<" "<<z<<" "<<x;
    }
    else if ((z<=y && z<=x)&&(x<=y))//z<x<y
    {
        cout<<z<<" "<<x<<" "<<y;
    }
    else {
    cout<<y<<" "<<x<<" "<<z;
    }
    return 0;
}
