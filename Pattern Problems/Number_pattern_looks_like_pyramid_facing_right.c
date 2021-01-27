#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++,printf("\n"))
    {
        if(i==0)
            printf("*");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            printf("%d",j);
    }
    for(i=n-1;i>=0;i--,printf("\n"))
    {
        if(i==0)
            printf("*");
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(j=i-1;j>=1;j--)
            printf("%d",j);
    }
    return 0;
}
