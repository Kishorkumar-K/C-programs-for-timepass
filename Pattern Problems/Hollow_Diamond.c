#include<stdio.h>
int main()
{
    int i,j,k,spaces,n;              //it will work for even numbers..but for odd numbers u should do some changes to code
    printf("Enter a even number greater than 6 : ");
    scanf("%d",&n);
    if (n%2!=0)                        //to check the number is even or odd
    {
        printf("Please enter a even number!! Try Again!!!");
        exit(1);                           // to terminate
    }
    //first half
    for(i=1;i<(n/2);i++)
    {
        for(j=1;j<=(n/2)-i;j++)
            printf(" ");
        if(i==1)                //first star
        {
            printf("*");
        }
        else
        {
            printf("*");
        for(j=1;j<=2*i-3;j++)
            printf(" ");
            printf("*");
        }
        printf("\n");
    }
    //second half
    for(i=(n/2)+1;i<n;i++)
    {
        for(j=1;j<=i-(n/2);j++)
            printf(" ");
        if(i==n-1)                     //last star
            printf("*");
        else
        {
            printf("*");
            for(j=1;j<=2*(n-i)-3;j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
