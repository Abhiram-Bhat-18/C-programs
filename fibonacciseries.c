#include <stdio.h>
int main() {
    int n = 12, i, fib2;
    int fib0 = 0, fib1 = 1;
    printf("%d\n", fib0);
    printf("%d\n", fib1);

    for(i = 3; i <= n; i++) {
        fib2 = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib2;
         printf("%d\n", fib2);
    }
    return 0;
}

