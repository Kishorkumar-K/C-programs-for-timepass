/*
1                1                    1  8
12            21                    2  6
123        321                    3  4
1234    4321                    4  2
1234554321        spaces.. n*2-1--starting-...8,6,4,2,0
*/
#include<stdio.h>
#include<conio.h>
int spacess(int i,int n);
int main()
{
    int n,i,j,k,spaces;
    printf("Enter any number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for (j=1,k=2*i-1; j<=2*i-1; j++,k--)
        {
            if(j==k)
            {
                printf("%d",j);
                spacess(i,n);
            }
            if (j <= k)
                printf("%d", j);

            else
                printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}
int spacess(int i,int n)
{
    int spaces,j,k=(n*2)-2;
    for(j=i;j>1;j--)
        k=k-2;
    for(spaces=1;spaces<=k;spaces++)
        printf(" ");
}
/*
#include<stdio.h>
int main()
{
    int i,j,n,space=0,k;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++,printf("\n"))
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(space=i+1;space<=2*n-i;space++)
          {

               printf(" ");
            }
        for(j=1,k=i;j<=i;j++,k--)

          printf("%d",k);


    }
    return 0;
}
*/
