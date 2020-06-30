#include<stdio.h>
int main()
{
    int n=9,spaces,i,j;
    for(i=1;i<=n;i++)
    {
        for(spaces=1;spaces<=n-i;spaces++)
            printf("   ");
        for(j=1;j<=2*i-1;j++)
            printf(" * ");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(spaces=1;spaces<=n-i;spaces++)
            printf("   ");
        for(j=1;j<=2*i-1;j++)
            printf(" * ");
        printf("\n");
    }
    return 0;
}
