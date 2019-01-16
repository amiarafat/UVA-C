#include<stdio.h>
#include<string.h>

void is_prime(int sum) {
    int i;
    for(i = 2; i <= sum / 2; i++) {
        if(sum % i == 0) {
            printf("It is not a prime word.\n");
            return;
        }
    }
    printf("It is a prime word.\n");
}

int main()
{

    int a,b,c,i,j,sum,l,p;
    char word[25];
    while(scanf("%s",word)==1)
    {
    l=strlen(word);
    sum=0;
        for(i=0;i<l;i++)
        {
        if(word[i]<=122 && word[i]>=97)
        sum=sum+(word[i]-96);
        if(word[i]<=90 && word[i]>=65)
        sum=sum+(word[i]-38);
        }
        is_prime(sum);
    }
}
