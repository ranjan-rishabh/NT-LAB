#include<bits/stdc++.h>
#define dou double
#define ll long long
using namespace std;
main()
{
    ll n;
    cin>>n;
    dou a[n][n+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    dou x[n];
    dou xt[n];
    bool t=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int k=0;k<120&&t==0;k++)
    {
        for(int i=0;i<n;i++)
        {
            xt[i]=a[i][n];
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                    xt[i]=xt[i]-(a[i][j]*x[j]);
            }
            xt[i]=xt[i]/a[i][i];
            //x[i]=xt[i];
        }
        for(int j=0;j<n;j++)
        {
            x[j]=xt[j];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<x[i]<<'\n';
    }
}
/*
3
4 1 1 2
1 5 2 -6
1 2 3 -4
0.5
-0.5
-0.5
*/
