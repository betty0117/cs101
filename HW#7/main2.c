#include <stdio.h>
#include <math.h>
int main()
{
    double PI=0;
    double x=1;
    for(int i=0;i<=500000;i++){
        PI=PI+(4/x);

        if(i%2==0)
            x=-(abs(x)+2);
        else x=abs(x)+2;
    }
    printf("%.5f\n",PI);
    return 0;
}
