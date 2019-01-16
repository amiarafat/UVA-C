#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    long long i,j,k,b,c,l;
    while(1)
    {
        scanf("%s",a);
         c=0;b=0;
        l=strlen(a);
        if(a[0]=='0' && l==1)
        break;
        for(i=0;i<l;i=i+2)
        c+=a[i]-'0';
        for(j=1;j<=l;j+=2)
        b+=a[j]-'0';
        k=c-b;
        if(k%11==0)
        printf("%s is a multiple of 11.\n",a);
        else
        printf("%s is not a multiple of 11.\n",a);
    }
}
