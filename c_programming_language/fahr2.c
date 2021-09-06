#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

/**
 * 当 fahr=0, 20, ..., 300时，打印华氏温度与摄氏温度对照表；
 * 浮点数版本
 */
int main() {
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
    putchar('c');
    putchar('\n');
    putchar('1');
    putchar('\n');
}
