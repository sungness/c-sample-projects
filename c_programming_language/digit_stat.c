#include <stdio.h>

/**
 * 统计数字、空白符，及其他字符数
 */
int main() {
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    printf("0=%d\n", '0');
    printf("1=%d\n", '1');
    printf("2=%d\n", '2');
    printf("2-0=%d\n", '2' - '0');

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            nwhite++;
        } else {
            nother++;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; i++) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}
