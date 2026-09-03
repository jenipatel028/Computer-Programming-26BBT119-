#include<stdio.h>
int main()
{
    int i,n, sum=0;
    printf("enter value of n");
    scanf("%d",&n);
     for(i=1; i<=n; i=i+1)
     {
         sum=sum+i;
     }
     printf("sum is %d",sum);
 return 0;
}

