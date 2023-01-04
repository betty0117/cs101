#include <stdio.h>
int count1(int i){

    int count=0;
    for(int j=0;j<8;j++){
        if (i%2==1)
            count++;
        i/=2;
    }

    return count;
}
int main()
{
    int i=15;
    printf("%d",count1(i));
    return 0;
}
