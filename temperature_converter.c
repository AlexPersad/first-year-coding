/*
 * temperature_converter.c
 * Converts a temperature between Fahrenheit and Celsius.
 * Author: Alex Persad
 */

#include <stdio.h>

double fahrenheit_to_celsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

double celsius_to_fahrenheit(double c) {
    return c * 9.0 / 5.0 + 32.0;
}

int main(void) {
    int choice;
    double temp;

    printf("Temperature Converter\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter the temperature: ");
    if (scanf("%lf", &temp) != 1) {
        printf("Invalid temperature.\n");
        return 1;
    }

    if (choice == 1) {
        printf("%.2f F = %.2f C\n", temp, fahrenheit_to_celsius(temp));
    } else {
        printf("%.2f C = %.2f F\n", temp, celsius_to_fahrenheit(temp));
    }

    return 0;
}
