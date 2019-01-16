#include<stdio.h>

int main()
{
    int t,n,a[60],i,j,hj,lj;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
            scanf("%d",&a[j]);
            hj=0;
            lj=0;
        for(j=2;j<=n;j++)
        {
            if(a[j]>a[j-1])
            hj++;
            else if(a[j]<a[j-1])
            lj++;
        }
        printf("Case %d: %d %d\n",i,hj,lj);
    }
    return 0;
}
