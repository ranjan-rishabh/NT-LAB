#include<bits/stdc++.h>
#define ll long long
using namespace std;
double fn(double c)
{
    return c*c*c-2*c*c+c-2;
}
double f1(double c)
{
    return 3*c*c-4*c+1;
}
main()
{
    ll t=2000;
    double a,b,c;
    cin>>a;
    while(t--)
    {
        if((f1(a)==0))
            break;
        c=a-(fn(a)/f1(a));
        a=c;
        //cout<<fn(c)<<'\t';
    }
    cout<<c;
}
