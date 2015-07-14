#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Hello World\n");
  printf("who are you?\n");
  int i,j;
  for(i=1;i<=9;i++) {
    for(j=1;j<=9;j++) {
      printf("%d * %d = %d\n",i,j,i*j);
    }
    printf("\n");
  }
  printf("bye ! bye !\n");
  return 0;
}
