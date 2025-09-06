#include<stdio.h>
int main() {
	int i,j,k,n = 3;
	for(k=1;k<=n;k++) {
	
	for(i=1;i<=5;i++) {
		for(j = 0;j<i-1;j++) {
			printf(" ");
		}
			printf("* * * * *\n");
	}
	for(i=4;i>=2;i--) {
		for(j = 0;j<i-1;j++) {
			printf(" ");
		}
			printf("* * * * *\n");
	}
}
	return 0;
}
