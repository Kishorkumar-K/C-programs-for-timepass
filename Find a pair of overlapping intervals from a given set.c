//Given a 2D array arr[][] with each row of the form {l,r},the task is to find a pair{i,j},
//such that the i th interval lies within the j th interval.
//If multiple exists ,then print anyone of them .Otherwise,print -1.
//
//Input: N=5,arr[][]={{1,5},{2,10},{3,10},{2,2],{2,15})
//Output:3 0
//Explanation:[2,2] lies inside [1,5]
//
//Input: N=4,arr[][]={{2,10},{1,9},{1,8},{1,7}}
//Output: -1
//Explanation:No such pair of interval exists.

#include<stdio.h>
int main()
{
   int n,arr[20][20],temp1,temp2,arr2[50][50]={0};
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<2;j++)
        scanf("%d",&arr[i][j]);
   }
   for(int i=0;i<n;i++)
   {
       temp1=arr[i][0];
       temp2=arr[i][1];
       if(temp1 > 0)
       {
           if(arr2[0][temp1 -1]>0)
               if(arr2[0][temp2 + 1]>0)
               {
                   printf("%d\t%d",arr[0][0],arr[0][1]);
                   exit(1);
               }
       }
       for(int j=arr[i][0];j<=arr[i][1];j++)
       {
        arr2[0][j]=arr[i][0];
       }
   }
   printf("-1");
    return 0;
}
