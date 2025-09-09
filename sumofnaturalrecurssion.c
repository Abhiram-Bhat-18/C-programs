#include<stdio.h>
int sum(int n) {
	if(n==0){
		return 0;
	} else {
		return n + sum(n-1);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	printf("the sum of natural numbers: %d",sum(n));
	return 0;
}
