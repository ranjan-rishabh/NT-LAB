#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ll n,i,j;
    cin>>n;
    double a[n][n+1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>a[i][j];
    }
    ll b[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        a[i][n]=b[i];
    }
    ll k;
    double r;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            r=(a[j][i]/a[i][i]);
            for(k=i;k<n+1;k++)
            {
                a[j][k]=a[j][k]-r*a[i][k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i][n];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<'\n';
    }
    double an[n],t;
    for(i=n-1;i>=0;i--)
    {
        t=0;
        for(j=n-1;j>i;j--)
        {
            t+=an[j]*a[i][j];
        }
        t=b[i]-t;
        an[i]=t/a[i][i];
        //cout<<an[i]<<'\t';
    }
    for(i=0;i<n;i++)
    {
        cout<<an[i]<<'\n';
    }
}
/*
4
6 -2 2 4
12 -8 6 10
3 -13 9 3
-6 4 1 -18
16
26
-19
-34
*/

