#include <stdio.h>

#define MAXLINE 1024    /* 行的最大长度 */

int getline_(char line[], int maxline);
void reverse_(char to[], char from[], int len);
/**
 * 字符串顺序反转样例程序
 */
int main()
{
    int len;
    char line[MAXLINE];
    char reverse_line[MAXLINE];

    while ((len = getline_(line, MAXLINE)) > 0) {
        printf("orginal:%s\n", line);
        reverse_(reverse_line, line, len);
        printf("reverse:%s\n", reverse_line);
    }
    return 0;
}

/* 将一行读入到 str中，并返回其长度 */
int getline_(char str[], int limit)
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        str[i] = c;
    }
    if (c == '\n') {
        str[i] = c;
        ++i;
    }
    str[i] = '\0';
    return i;
}

void reverse_(char to[], char from[], int len)
{
    int i;

    i = 0;
    while ((to[i] = from[len - i - 1]) != '\0') {
        ++i;
    }
}
