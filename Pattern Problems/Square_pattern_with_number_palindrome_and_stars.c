#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=n;i>0;i--,printf("\n"))
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
        if(i<n)
        {
            for(k=1;k<=(n-i)*2;k++)
                printf("*");
        }
        for(j=i;j>0;j--)
            printf("%d",j);
    }
    return 0;
}
