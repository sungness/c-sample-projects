#include <stdio.h>

#define IN  1  /** 在单词内 */
#define OUT 0  /** 在单词外 */

/**
 * 统计单词数量，并以每行一个单词的形式打印其输入
 */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        nc++;
        if (c == '\n') {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            continue;
        } else if (state == OUT) {
            state = IN;
            nw++;
            printf("\n");
        }
        printf("%c", c);
    }
    printf("\nnl=%d,nw=%d,nc=%d\n", nl, nw, nc);
}
