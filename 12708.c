#include<stdio.h>
int main()
{
    long long int i,n,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        n=0;
        scanf("%lld",&n);
        if(n%2!=0)
        n--;
        printf("%lld\n",n/2);
    }
    return 0;
}

