#include<stdio.h>
#include<conio.h>
void main(){
	int i,j;1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){
		for(j=i;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

