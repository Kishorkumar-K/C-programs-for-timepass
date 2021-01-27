#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,star,n=5;
    for(i=1;i<=n;i++)
    {
        for(star=0;star<9-i;star++)
            printf("*");
        for(j=0;j<i;j++,printf("*"))
            printf("%d",i);
        for(star=0;star<9-i;star++)
            printf("*");
        printf("\n");
    }
    return 0;
}
