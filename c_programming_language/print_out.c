#include <stdio.h>

/**
 * 递归打印数字
 */
void PrintDigit(N) {
    printf("%d\n", N);
}

void PrintOut(unsigned int N) {
    if (N >= 10) {
        PrintOut(N / 10);
    }
    PrintDigit(N % 10);
}

int main() {
    PrintOut(76234);
    printf("\n");
}
