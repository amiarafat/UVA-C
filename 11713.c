#include<stdio.h>
#include<string.h>

main()
{
    char a[300],b[300],c[300];
    int n,t,i,j,k,l,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        k=strlen(a);
        l=strlen(b);
        m=0;
        if(k!=l)
        printf("No\n");
        else
        {
            for(j=0;j<=l;j++)
            {
                if(a[j]=='a' || a[j]=='e' || a[j]=='i'|| a[j]=='o' || a[j]=='u')
                continue;
                else if(a[j]!=b[j])
                {
                    m++;
                    break;
                }
            }
            if(m==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
    }
}
