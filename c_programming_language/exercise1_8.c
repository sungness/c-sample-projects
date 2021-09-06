#include <stdio.h>

/**
 * 统计空格、制表符、换行符个数
 */

int main() {
    long space_count = 0;
    long tab_count = 0;
    long line_break_count = 0;
    int c;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            space_count++;
        } else if (c == '\t') {
            tab_count++;
        } else if (c == '\n') {
            line_break_count++;
        }
    }
    printf("space_count=%ld\n", space_count);
    printf("tab_count=%ld\n", tab_count);
    printf("line_break_count=%ld\n", line_break_count);
}
