#include<stdio.h>
main()
{
    int t,n,m,a,b,c,d,e,f,g,h,i,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        a=a*60+b;
        c=c*60+d;
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        e=e*60+f;
        g=g*60+h;
        if(e>c || a>g)
        printf("Case %d: Hits Meeting\n",i);
        else
        printf("Case %d: Mrs Meeting\n",i);
    }
    return 0;
}
