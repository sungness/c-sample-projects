#include <stdio.h>

/**
 * 将输入复制到输出
 */
int main() {
    int c;

    printf("EOF=%d\n", EOF);
    while ((c = getchar()) != EOF) {
        printf("c != EOF:%d\n", c != EOF);
        putchar(c);
    }
    printf("EOF=Control + D\n");
}
