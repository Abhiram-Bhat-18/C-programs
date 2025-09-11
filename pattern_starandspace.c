#include <stdio.h>
int main() {
    int n, spaces, stars;
    int i, j;
    printf("Enter the n value: ");
    scanf("%d", &n);

    spaces = n - 1;
    stars = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= spaces; j++) {
            printf("_ ");
        }
        for (j = 1; j <= stars; j++) {
            printf("* ");
        }
        spaces--;
        stars++;
        printf("\n");
    }
    return 0;
}
