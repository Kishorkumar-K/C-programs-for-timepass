#include<stdio.h>
int main()
{
    int i,j,k,n,spaces;
    char str[100];
    printf("Enter a word : ");
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
                printf("%c",str[i]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
