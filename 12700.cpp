#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int t,tc,n,i,j,k,l,w,x,y,z,a,b,d;
    char str[15];
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d",&n);
        getchar();
        gets(str);
        w=0;b=0;a=0;t=0;
        for(j=0;j<strlen(str);j++)
        {
            if(str[j]=='W')
            w++;
            if(str[j]=='B')
            b++;
            if(str[j]=='A')
            a++;
            if(str[j]=='T')
            t++;
        }

        if(a==n)
        printf("Case %d: ABANDONED\n",i);
        else if(a+w==n && w!=0)
        printf("Case %d: WHITEWASH\n",i);
        else if(b+a==n && b!=0)
        printf("Case %d: BANGLAWASH\n",i);
        else if(b>w)
        printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(w>b)
        printf("Case %d: WWW %d - %d\n",i,w,b);
        else if(b==w)
        printf("Case %d: DRAW %d %d\n",i,b,t);
    }
    return 0;
}
