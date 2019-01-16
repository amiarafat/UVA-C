#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,m,n,i,j,k,l,r;
    long long a[10005];
    long long int ar[10005];
    while(scanf("%lld%lld",&m,&n)==2)
    {
        for(int x=0;x<=10005;x++)
        ar[x]=0;
        if(m==0 || n==0)
        break;
        for(i=1;i<=n;i++)
        {
            scanf("%lld",&a[i]);
            ar[a[i]]=a[i];
        }
        if(m==n)
        printf("*\n");
        else
        {
        for(j=1;j<=m;j++)
        {
            if(ar[j]==0)
            printf("%lld ",j);
        }
        printf("\n");
        }
    }
    return 0;
}
