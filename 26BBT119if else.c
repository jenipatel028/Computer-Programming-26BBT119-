#include<stdio.h>
 void main()
  {
      int a,b,c;
      printf("Enter three Numbers");
      scanf("%d %d %d", &a,&b,&c);

      if(a>b && a>c)
      {
          printf("%d is Greater",a);
      }
      else if(c>a && c>b)
      {
          printf("%d is Greater",c);

      }
      else if(b>a && b>c)
      {
          printf("%d is Greater",b);

      }
  }


