#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    double x,e,a,b,c;
    cin>>a>>b;
    while(b-a>0.00000000001)
    {
        c=(b+a)/2;
        if((c-exp(-c))*(a-exp(-a))>0)
        {
            a=c;
        }
        else if((c-exp(-c))*(a-exp(-a))<0)
        {
            b=c;
        }
        else
            break;
    }
    cout<<setprecision(30)<<c<<'\n';
}
