#include <stdio.h>

void print_spaces(int r, int rows){
    for(int  space=0; space <=rows ; space++){
    printf("  ");        
    }

}

void print_stars(int r){
    for(int i=0; i <9-2*r ; i++){
     printf("* ");        
    }

}

int main()
{
    int rows = 5;
    for(int r=0;r<rows;r++){
    print_spaces(rows, r);
    print_stars(r);
    printf("\n");   
    }


    return 0;
}
