#include<stdio.h>
int main()
{
    int i,n,t;
    i=1;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        else
        printf("Case %d: %d\n",i,n/2);
        i++;
    }
}
