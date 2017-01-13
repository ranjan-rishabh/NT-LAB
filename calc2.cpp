#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    double x,e,a,b,c;
    cin>>a>>b;
    ll i=100;
    while(b-a>0.00000000001)
    {
        c=(b+a)/2;
        if((c*c*c-c-1)*(a*a*a-a-1)>0)
        {
            a=c;
        }
        else if((c*c*c-c-1)*(a*a*a-a-1)<0)
        {
            b=c;
        }
        else
            break;
    }
    cout<<c<<'\n';
}
