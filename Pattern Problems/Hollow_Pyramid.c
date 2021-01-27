#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k=0;
    printf("Enter the Size : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++,k=0)
    {
        for (j = i; j < n; j++)
            printf(" ");
        while (k!=(2*i-1))
            {
            if (k==0||k==2*i-2)
                printf("*");
            else
                printf(" ");
            k++;
            }
        printf("\n"); // print next row
    }
    for (i=0;i<2*n-1;i++)
        printf("*");
    return 0;
}
