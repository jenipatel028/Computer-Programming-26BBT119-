#include<stdio.h>
 int main()
  {
      float n,a,d,g;
      printf("Enter Salary");
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
            printf("gross salary is smaller than 5000");
          }
      }
      n=g+a-d;
      printf("Net salary is %f",n);

       return 0;

  }

