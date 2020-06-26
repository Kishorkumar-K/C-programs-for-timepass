#include<stdio.h>
int main()
{
    int i,j,space,n=5,space1,i1,j1;
    for(i=1;i<=n;i++,printf("\n"))
    {

        for(space=0;space<=i;space=space+1)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {

            printf("*");
        }

    }

        for(i1=0;i1<=n;i1++,printf("\n"))
        {
            for(space1=0;space1<=n-i1;space1++)
            {
                printf(" ");
            }
            for(j1=0;j1<=n-i1;j1++)
            {
                printf("*");
            }
        }


    return 0;
}
