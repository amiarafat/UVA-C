#include<stdio.h>
int main()
{
    long long int i,j,k,n,t;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        k=0;
        for(i=1;i<=n;i++)
        k=k+i*i;
        printf("%lld\n",k);
    }

}
