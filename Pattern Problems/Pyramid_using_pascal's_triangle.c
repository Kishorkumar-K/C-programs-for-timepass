#include<stdio.h>
int main()
{
    int i,j,n;
    int k[10][10];
    printf("enter n value \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(j=1;j<=i;j++)
        {
            if(i==1||j==1||j==i)
                k[i][j]=1;
            else
                k[i][j]=k[i-1][j-1]+k[i-1][j];
           printf("%d",k[i][j]);
        }
    }
    return 0;
}
