#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int t,i,jk,l;
    double a,b,x,y,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>r;
        a=r-sqrt(x*x+y*y);
        b=r+sqrt(x*x+y*y);

        printf("%.2lf %.2lf\n",a,b);
    }
    return 0;
}
