#include<stdio.h>
int main()
{
    long long int m,n,i,j,t;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        t=m*n;
        printf("%lld\n",t-1);
    }
    return 0;
}
