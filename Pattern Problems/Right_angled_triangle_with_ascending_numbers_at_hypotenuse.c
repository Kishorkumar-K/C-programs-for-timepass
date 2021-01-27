#include<stdio.h>
int main()
{
    int i,j,n=5,r,k=0;
    int static s;
   for(i=1;i<=n;i++,k++,printf("\n"))
   {
       if(i==1)
       {
            printf("1");
            continue;
       }
       else
       {
           for(j=1;j<i;j++)
           {
               s=i+j;
               printf("%d",s);
           }
            for(r=s-1;r>=i;r--)
                printf("%d",r);
       }
   }
    return 0;
}
