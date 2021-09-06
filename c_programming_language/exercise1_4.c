#include <stdio.h>

/* print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -17;   /* lower limit of temperatuire scale */
    upper = 145; /* upper limit */
    step = 11;   /* step size */


    printf("Celsius\tFahrenheit\n");
    celsius  = lower;
    while (celsius  <= upper)
    {
        fahr = celsius * 9.0 / 5.0 + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}

