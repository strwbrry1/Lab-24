
#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return fact(n - 1) * n;
}

int main()
{
    int n;

    printf("Input a number -> ");
    scanf_s("%d", &n);
    printf("%d! = %d", n, fact(n));
}
