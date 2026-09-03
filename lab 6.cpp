#include<stdio.h>
int main()
{
    int i,n,factor=1;
    printf("enter value of n");
    scanf("%d",&n);
     for(i=1; i<=n; i=i+1)
     {
         factor= factor*i;
     }
     printf("factorial is %d",factor);
 return 0;
}

