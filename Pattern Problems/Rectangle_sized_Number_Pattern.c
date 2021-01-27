#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=n;i>=1;i--,printf("\n")) //first half
    {
        for(j=n;j>i;j--)
            printf("%d",j);
        for(j=1;j<=i*2-1;j++)
            printf("%d",i);
        for(j=i+1;j<=n;j++)
            printf("%d",j);
    }
    for(i=1;i<n;i++,printf("\n"))   //second half
    {
        for(j=n;j>i;j--)
            printf("%d",j);
         for(j=1;j<=i*2-1;j++)
            printf("%d",i+1);
        for(j=i+1;j<=n;j++)
            printf("%d",j);
    }
}
