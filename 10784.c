#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,n,x;
    i=1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        break;
        x=ceil((3+sqrt(9+(8*n)))/2);
        printf("Case %lld: %lld\n",i,x);
        i++;
    }

}
