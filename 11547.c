#include <stdio.h>
int main()
{
    int test,n,tens,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
    scanf("%d",&n);
    n=n*63;
    n=n+7492;
    n=n*5;
    n=n-498;
    n=n/10;
    n=n%10;
    if(n>=0)printf("%d\n",n);
    else printf("%d\n",-n);
    }
    return 0;
}

