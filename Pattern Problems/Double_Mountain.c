#include<stdio.h>
#include<conio.h>
int main()
{
    int row,i,j,k,spaces;
    printf("Enter the Size of Mountain(1-9) : ");
    scanf("%d",&row);
    if((row>9)||(row<1))
    {
        printf("Enter a valid number!!Try again!!!");
        exit(1);
    }
     for(i=1;i<=row;i++,printf("\n"))
    {
        for(spaces=i;spaces<=row;spaces++)  //first mountain
            printf(" ");
        for(j=1;j<=i;j++,printf(" "))
            printf("%d",i);
         for(spaces=2*(row-i);spaces>=0;spaces--)  //second mountain
            printf(" ");
        for(j=1;j<=i;j++,printf(" "))
            printf("%d",i);
        }
    return 0;
}
