#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i;
  printf("enter Year:");
  scanf("%d",&i);
  if(i%4==0)
      printf("year is leap year");
      else
      printf("year is not a leap year");
      return 0;
}
