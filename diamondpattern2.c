#include<stdio.h>
int main() {
	int n=4,i,j,spaces = n-1,star = 1;
	for(i=1;i<=n;i++) {
		for(j=0;j<=spaces;j++) {
			printf(" ");
		}
		for(j=1;j<=star;j++) {
			printf("*");
		}
		star=star+2;
		spaces--;
		printf("\n");
	}

star = star - 4;
spaces = 1;
	for(i=1;i<=n;i++) {
		for(j=0;j<=spaces;j++) {
			printf(" ");
		}
		for(j=1;j<=star;j++) {
			printf("*");
		}
		star=star-2;
		spaces++;
		printf("\n");
	
}
return 0;
}
