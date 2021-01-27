#include<stdio.h>
#include<conio.h>
int main()
{
    int row,col,i,j,k,t,spaces;
    printf("Enter the Size of Kite (1-9): ");
    scanf("%d",&row);
    if((row>9)||(row<1))
    {
        printf("Enter a valid number!!Try again!!!");
        exit(1);
    }
    //top pyramid of kite
    for(i=1;i<=row;i++,printf("\n"))
    {
        for(spaces=i;spaces<=row;spaces++)
            printf(" ");
        for(j=1;j<=i;j++,printf(" "))
            printf("%d",i);
    }
    //Bottom pyramid of kite
    for(i=row;i>=1;i--,printf("\n"))
    {
        for(spaces=i;spaces<=row;spaces++)
            printf(" ");
        for(j=i;j>=1;j--,printf(" "))
            printf("%d",i);
    }
    //Tail of Kite
    for(k=0;k<3;k++)
    {
        for(spaces=1;spaces<=row+k;spaces++)
            printf(" ");
        printf("0\n");
    }
//Created by KK
    for(k=0;k<5;k++)
    {
        for(spaces=1;spaces<=(row+3)-k;spaces++)
            printf(" ");
        printf("0\n");
    }
//Created by KK
    for(k=0;k<2;k++)
    {
        for(spaces=1;spaces<=(row-2)+k;spaces++)
            printf(" ");
        printf("0\n");
    }
    return 0;
}
