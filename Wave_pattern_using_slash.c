#include<stdio.h>
int main()
{
    int height=4,length=3,x,i,j;
    x=height-1;
    for(i=0;i<height;i++)
    {
        for(j=0;j<height*length*2;j++)
        {
            if(j%(height*2)==x)
                printf("/");
            else if(j%(height*2)==height+i)
                printf("\\");
            else
                printf(" ");
        }
        x--;
        printf("\n");
    }
    return 0;
}
