#include <iostream>

using namespace std;

int main()
{
     int a,b,p,r=400;
     cin>>a>>b;
     p=a*b;
     int n = p/r;
     int y = r*n;
     int x = p - y;
     int m = x/(r/2);
     if (p<=(r/2))
     {
        cout<<p;
     }
     else if (p>(r/2) && p<r)
     {
        cout<<r-p;
     }
     else 
     {
        cout<<abs(r*m-x);
     }
     return 0;
}
