#include <stdio.h>
int main()
{
  for(int count=0;count<81;count++){
        int x=(count/9)+1;
        int y=((count)%9+1);
        printf("%d*%d=%d\t",x,y,y*x);
        if (y==9)
            printf("\n");
  }
