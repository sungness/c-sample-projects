#include <stdio.h>

#define MAXLINE 1000

int getline_(char line[], int maxline);
void copy(char to[], char from[]);

/**
 * 读入一组文本行，并把最长的文本行打印出来
 */
int main()
{
    int len;      /* 当前行长度*/
    int max;      /* 目前为止发现的最长行的长度 */
    char line[MAXLINE];     /* 当前的输入行 */
    char longest[MAXLINE];  /* 用于保存最长的行 */

    max = 0;
    while ((len = getline_(line, MAXLINE)) > 0) {
        printf("当前行长度：%d，文本内容：%s\n", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
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

/* 将from复制到to，这里假定to足够大 */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
