#include<stdio.h>
main()
{
  int i,j,result;
  printf("\n");
  for(i=1;1<10;i++)
    { for(j=1;j<10;j++)
       {
         result=i*j;
         printf("%d%d=%-3d",i,j,result)
       }
         printf("\n");
    }
}
