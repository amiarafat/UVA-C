#include<stdio.h>
int main()
{
    int t,m,n,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
}
