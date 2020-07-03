#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    n=n+1;
    for(i=1;i<=n;i++, printf("\n"))
    {
        if(i==1)
        {
            printf("*");
            continue;
        }
        printf("*");
        for(j=1;j<i;j++)
            printf("%d",j);
        for(j=i-2;j>=1;j--)
            printf("%d",j);
        printf("*");
    }
    for(i=n-1;i>=1;i--, printf("\n"))
    {
        if(i==1)
        {
            printf("*");
            continue;
        }
        printf("*");
        for(j=1;j<i;j++)
            printf("%d",j);
        for(j=i-2;j>=1;j--)
            printf("%d",j);
        printf("*");
    }
    return 0;
}
