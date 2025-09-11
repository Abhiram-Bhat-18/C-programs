#include<stdio.h>

int factorial(int num) {
	int i,fact = 1;
	for(i = 0;i <= num;i++) {
		fact = fact * i;
	}
	return fact;
}
int main() {
	int n,sum = 0,d,copy_n;
	scanf("%d",&n);
	copy_n = n;
	
	while(n != 0) {
		d = n % 10;
		sum = sum + factorial(d);
		n = n / 10;
	}
	printf("%d\n", sum);
	
	if(copy_n == sum) {
		printf("strong number");
		}else {
		printf("not strong number");
	}
	return 0;
}
