#include <stdio.h>

/**
 * 将输入复制到输出，并将连续多个空格替换成一个
 */

int main() {
    int c;
    int pre_char = -1;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (pre_char == ' ') {
                continue;
            }
        }
        pre_char = c;
        if (c == '\t') {
            printf("\\t");
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
}
