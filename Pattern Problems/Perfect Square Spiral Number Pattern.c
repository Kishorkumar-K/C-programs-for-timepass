#include<stdio.h>
int main()
{
    int arr[50][50];
    int size,n,top,left;
    n=1;
    left=0;
    printf("Enter the size (even numbers): ");
    scanf("%d",&size);
    top=size-1;
    for(int i=1;i<=size/2;i++,left++,top--)
    {
        for(int j=left;j<=top;j++,n++)   //from left to right
        {
            arr[left][j]=n;
        }
        for(int j=left+1;j<=top;j++,n++)     //from top to bottom
        {
            arr[j][top]=n;
        }
        for (int j=top-1;j>=left;j--,n++)    //from right to left
        {
            arr[top][j]=n;
        }
        for(int j=top-1;j>=left+1;j--,n++)     //from bottom to top
        {
            arr[j][left]=n;
        }
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
            printf("%-5d",arr[i][j]);
        printf("\n");
    }
}
