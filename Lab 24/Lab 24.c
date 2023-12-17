
#include <stdio.h>

void extraEGE4(int n);

int f1(int n) {
    if (n % 2 != 0) {
        printf("%d ", n);
    }
    if (n > 1) {
        f1(n - 1);
    }
    
}

int f2(int n) {
    if (n > 1) {
        f2(n - 1);
    }
    if (n % 2 != 0) {
        printf("%d ", n);
    }
}

int f3(int n) {
    f1(n);
    f2(n);
}

void recEGE1(int n) {
    if (n >= 1) {
        printf(" %d", n);
        recEGE1(n - 1);
        recEGE1(n - 1);
    }
}

void recEGE2(int n) { // F1
    if (n > 2) {
        printf("%d\n", n);
        recEGE2(n - 3);
        recEGE2(n - 4);
    }
}

void recEGE3(int n) { // F2
    printf("%d\n", n);
    if (n < 5) {
        recEGE3(n + 1);
        recEGE3(n + 3);
    }
}

void recEGE4(int n) { // F3
    if (n > 0) {
        extraEGE4(n - 1);
    }
}

void extraEGE4(int n) { // G3
    printf("*");
    if (n > 1) {
        recEGE4(n - 3);
    }
}

int main() {
    int n;

    /*printf("Input a number -> ");
    scanf_s("%d", &n);

    f1(n);
    printf(" <- res 1\n");

    f2(n);
    printf(" <- res 2\n");

    f3(n);
    printf(" <- res 3\n");*/

    recEGE1(3);
    printf("\n");

    recEGE2(10);
    printf("\n");

    recEGE3(1);
    printf("\n");

    recEGE4(11);
    printf("\n");
}
