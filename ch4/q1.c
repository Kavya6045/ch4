#include <stdio.h>

void main() 


{
    int rows = 5; 
    int start_number = 41; 
    int i,j;
    
    for (i = 1; i <= rows; i++) {
       
        for (j = 1; j <= i; j++)
		{
            printf("%d ", start_number + j - 1); 
        }
        printf("\n"); 
    }

    getch();
}

