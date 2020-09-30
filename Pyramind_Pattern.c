#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,spaces;
    printf("Enter the Height of Pyramid :\t");
    scanf("%d",&row);
    for(i=1;i<=row;i++,printf("\n"))
    {
        for(spaces=i;spaces<=row;spaces++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++,printf(" "))
        {
            printf("%d",i);
        }
    }
    return 0;
}
