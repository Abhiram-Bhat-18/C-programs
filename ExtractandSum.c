#include<stdio.h>
int main() {
	int n,sum = 0,count = 0;
	scanf("%d",&n);
	while(n != 0) {
		int d = n%10;
		sum += d;
		n = n/10;
		count++;
		
	}
	printf("%d",count);
}
