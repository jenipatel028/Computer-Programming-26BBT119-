#include<stdio.h>
int main()
 {
    float n,a,d,g;
         printf("enter salary");
         scanf("%f",&g);

         if(g>10000)
         {
             a=0.1*g;
             d=0.03*g;

         }
         else
         {
             if(g>5000 && g<10000)
             {
                 a=0.07*g;
                 d=0.02*g;
             }
             else
             {
                printf("salary small");
                return 0;
             }
         }
         n=g+(a-d);
         printf("%f",n);
    }
