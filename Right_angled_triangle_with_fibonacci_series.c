#include<stdio.h>
int main()
{
    int n,i,j,x=1,y=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<=i;j++)
            {
                printf("%d ",x);
                x=x+y;
                y++;
            }
    }
    return 0;
}
