#include <stdio.h>

/**
 * 当 fahr=0, 20, ..., 300时，打印华氏温度与摄氏温度对照表；
 * 浮点数版本
 */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
