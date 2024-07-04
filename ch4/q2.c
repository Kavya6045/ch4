#include <stdio.h>
#include<conio.h>
void main()
{
    int rows = 4; 
    int number = 11; 
    int i,j;
    
    for (i = 1; i <= rows; i++)
	{
       
        for (j = 1; j <= i; j++)
		{
            printf("%d ", number);
            number++;
        }
        printf("\n"); 
    }

    getch();
}

