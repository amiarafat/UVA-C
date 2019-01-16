#include<stdio.h>
main()
{
    int n,i,j,k;
    double a,b,c,d;
    scanf("%d",&n);
    k=0;
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        if(((a+b+c)<=125||(a<=56&&b<=45&&c<=25)) && d<=7)
        {
                printf("1\n");
                k++;
        }

        else
        printf("0\n");
    }
    printf("%d\n",k);
    return 0;
}
