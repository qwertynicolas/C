/* Farenheit-Celsius table using functions */


        // celsius = (5.0 / 9.0) * (fahr - 32.0); 
      

#include <stdio.h>

float Conversion(float);

int main() {

    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

        fahr = lower;
        printf("Fahrenheit\tCelsius\n");
        while (fahr <= upper) {
        celsius = Conversion(fahr);
        printf("  %3.0f\t\t%6.1f\n", fahr, celsius);
        fahr += step;

    }

    return 0;
    
}

float Conversion(float fahr) {

    float k23;

    k23 = (5.0 / 9.0) * (fahr - 32.0);

    return k23;
}