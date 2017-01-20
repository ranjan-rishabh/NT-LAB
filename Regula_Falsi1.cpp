#include<bits/stdc++.h>
#define ll long long
using namespace std;
double fn(double c)
{
    return c*c*c-3*c+1;
}
main()
{
    ll t=2000;
    double a,b,c;
    cin>>a>>b;
    while(t--)
    {
        if(!(fn(a)-fn(b)))
           break;
        c=a-(((a-b)*fn(a))/(fn(a)-fn(b)));
        if(fn(c)*fn(a)<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
    }
    cout<<c;
}

