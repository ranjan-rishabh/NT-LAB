#include<bits/stdc++.h>
#define ll long long
using namespace std;
double a[100][100],b[100];
main()
{
    ll n;
    cout<<"Enter n:";
    cin>>n;
    ll i;
    cout<<"Enter A:\n";
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    double l[n][n],u[n][n];
    cout<<"Enter B:\n";
    for(i=0;i<n;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                l[i][j]=0;
                u[i][j]=-1;
            }
            else if(i==j)
            {
                u[i][j]=1;
                l[i][j]=-1;
            }
            else
            {
                u[i][j]=0;
                l[i][j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        l[i][0]=a[i][0];
    }
    double p;
    for(i=1;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            p=a[j][i];
            for(ll k=0;k<min(i,j);k++)
            {
                p-=l[j][k]*u[k][i];
            }
            if(j>=i)
            {
                l[j][i]=p;
            }
            else
            {
                u[j][i]=p/l[j][j];
            }
        }
    }
    cout<<"L:\n";
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<l[i][j]<<'\t';
        }
        cout<<endl;
    }
    cout<<"U:\n";
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<u[i][j]<<'\t';
        }
        cout<<endl;
    }
    double z[n];
    for(i=0;i<n;i++)
    {
        ll j=0;
        p=b[i];
        while(j<i)
        {
            p-=z[j]*l[i][j];
            j++;
        }
        z[i]=p/l[i][j];
    }
    cout<<"Z:\n";
    for(i=0;i<n;i++)
        cout<<z[i]<<'\t';
    cout<<'\n';
    double x[n];
    for(i=n-1;i>=0;i--)
    {
        ll j=n-1;
        p=z[i];
        while(j>i)
        {
            p-=x[j]*u[i][j];
            j--;
        }
        x[i]=p/u[i][i];
    }
    cout<<"X:\n";
    for(i=0;i<n;i++)
        cout<<x[i]<<'\t';
    cout<<'\n';
}
