/*
Write a program in C to make such a pattern like given below:
 1
 22
 333
 4444
 55555
 666666
 7777777
*/

#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=7;i++)
  {
    for(j=1;j<=7;j++)
    {
      if(j<=i)
      printf("%d",i);
      else
      printf(" ");
    }
    printf("\n" );
  }
}
