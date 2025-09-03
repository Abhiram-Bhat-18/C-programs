#include<stdio.h>
int main() {
	int r,c,i,j;

	printf("enter the rows and columns");
	scanf("%d %d",&r,&c);
	for(i = 0;i<r;i++) {
		for(j = 0;j<c;j++){
			printf("* ");
		}
		printf("\n");
	} 
}
