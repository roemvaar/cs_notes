#include <stdio.h>

// Program that prints the Fahrenheit temperatures and their Celsius equivalents
// Formula used: °C = (5/9) (°F-32)

int main()
{
    int far_temps[] = {0, 20, 40, 60, 80, 100, 120, 140, 160, 180, 200, 220, 240, 260, 280, 300};
    int i;
    
    printf("°F\t °C\n");

    for(i = 0; i < 16; i++)
    {
        printf("%d\t %.2f\n", far_temps[i], ((5/9.0)* (far_temps[i] - 32.0)));
    }
    
    return 0;
}

