#include <stdio.h>
#include <stdlib.h>

int length()

{
    float length;
    int unit;

    printf("\nLength\n\n");
    printf("Select the number of The unit you want to convert\n\nMeter - 1\tKilometer - 2\n\nMiles - 3\tYard - 4\n\nFoot - 5\tInch - 6\n\ncentimeter - 7\tmillimeter - 8\n\n-->:");
    scanf("%d", &unit);
    system("clear");
    printf("\nEnter the length you want to convert\n\n-->:");
    scanf("%f", &length);
    system("clear");
    if (unit == 1)
    {
        printf("\n%.2f Meters --> %.2f Kilometers\n\n", length, length / 1000);
        printf("\n%.2f Meters --> %.2f Miles\n\n", length, length / 1609.344);
        printf("\n%.2f Meters --> %.2f Yards\n\n", length, length / 0.9144);
        printf("\n%.2f Meters --> %.2f Feet\n\n", length, length / 0.3048);
        printf("\n%.2f Meters --> %.2f Inches\n\n", length, length / 0.0254);
    }
    else if (unit == 2)
    {
        printf("\n%.2f Kilometers --> %.2f Meters\n\n", length, length / 0.001);
        printf("\n%.2f Kilometers --> %.2f Miles\n\n", length, length / 0.621371);
        printf("\n%.2f Kilometers --> %.2f Yards\n\n", length, length / 0.0009144);
        printf("\n%.2f Kilometers --> %.2f Feet\n\n", length, length / 0.0003048);
        printf("\n%.2f Kilometers --> %.2f Inches\n\n", length, length / 0.0000254);
    }
    else if (unit == 3)
    {
        printf("\n%.2f Miles --> %.2f Meters\n\n", length, length * 1609.344);
        printf("\n%.2f Miles --> %.2f Kilometers\n\n", length, length * 1.60934);
        printf("\n%.2f Miles --> %.2f Yards\n\n", length, length * 1760);
        printf("\n%.2f Miles --> %.2f Feet\n\n", length, length * 5280);
        printf("\n%.2f Miles --> %.2f Inches\n\n", length, length * 63360);
    }
    else if (unit == 4)
    {
        printf("\n%.2f Yards --> %.2f Meters\n\n", length, length * 0.9144);
        printf("\n%.2f Yards --> %.2f Centimeters\n\n", length, length * 91.44);
        printf("\n%.2f Yards --> %.2f Milimeters\n\n", length, length * 914.4);
        printf("\n%.2f Yards --> %.2f Kilometers\n\n", length, length * 0.0009144);
        printf("\n%.2f Yards --> %.2f Miles\n\n", length, length * 0.00056818);
        printf("\n%.2f Yards --> %.2f Feet\n\n", length, length * 3);
        printf("\n%.2f Yards --> %.2f Inches\n\n", length, length * 36);
    }
    else if (unit == 5)
    {
        printf("\n%.2f Feet --> %.2f Meters\n\n", length, length * 0.3048);
        printf("\n%.2f Feet --> %.2f Centimeters\n\n", length, length * 30.48);
        printf("\n%.2f Feet --> %.2f Milimeters\n\n", length, length * 304.8);
        printf("\n%.2f Feet --> %.2f Kilometers\n\n", length, length * 0.0003048);
        printf("\n%.2f Feet --> %.2f Miles\n\n", length, length * 0.00018939);
        printf("\n%.2f Feet --> %.2f Yards\n\n", length, length * 0.333333);
        printf("\n%.2f Feet --> %.2f Inches\n\n", length, length * 12);
    }
    else if (unit == 6)
    {
        printf("\n%.2f Inches --> %.2f Meters\n\n", length, length * 0.0254);
        printf("\n%.2f Inches --> %.2f Centimeters\n\n", length, length * 2.54);
        printf("\n%.2f Inches --> %.2f Milimeters\n\n", length, length * 25.4);
        printf("\n%.2f Inches --> %.2f Kilometers\n\n", length, length * 0.0000254);
        printf("\n%.2f Inches --> %.2f Miles\n\n", length, length * 0.000015783);
        printf("\n%.2f Inches --> %.2f Yards\n\n", length, length * 0.0277778);
        printf("\n%.2f Inches --> %.2f Feet\n\n", length, length * 0.0833333);
    }
    else if (unit == 7)
    {
        printf("\n%.2f Centimeters --> %.2f Meters\n\n", length, length / 100);
        printf("\n%.2f Centimeters --> %.2f Kilometers\n\n", length, length / 100000);
        printf("\n%.2f Centimeters --> %.2f Miles\n\n", length, length / 160934.4);
        printf("\n%.2f Centimeters --> %.2f Yards\n\n", length, length / 91.44);
        printf("\n%.2f Centimeters --> %.2f Feet\n\n", length, length / 30.48);
        printf("\n%.2f Centimeters --> %.2f Inches\n\n", length, length / 2.54);
    }
    else if (unit == 8)
    {
        printf("\n%.2f Millimeters --> %.2f Meters\n\n", length, length / 1000);
        printf("\n%.2f Millimeters --> %.2f Kilometers\n\n", length, length / 1000000);
        printf("\n%.2f Millimeters --> %.2f Miles\n\n", length, length / 1609344);
        printf("\n%.2f Millimeters --> %.2f Yards\n\n", length, length / 914.4);
        printf("\n%.2f Millimeters --> %.2f Feet\n\n", length, length / 305);
        printf("\n%.2f Millimeters --> %.2f Inches\n\n", length, length / 25.4);
    }
    else
    {
        printf("\nInvalid Input\n\n");
    }
    return 0;
}
int time()
{
    float time;
    int unit;

    printf("\nTime\n\n");
    printf("Select the number of The unit you want to convert\n\nSeconds - 1\tMinutes - 2\n\nHours - 3\tDays - 4\n\nWeeks - 5\tmonths - 6\n\nyears - 7\tdecades - 8\n\n-->:");
    scanf("%d", &unit);
    system("clear");
    printf("\nEnter the time you want to convert\n\n-->:");
    scanf("%f", &time);
    system("clear");
    switch (unit)
    {
    case 1:
        printf("\n%.2f Seconds --> %.2f Minutes\n\n", time, time / 60);
        printf("\n%.2f Seconds --> %.2f Hours\n\n", time, time / 3600);
        printf("\n%.2f Seconds --> %.2f Days\n\n", time, time / 86400);
        printf("\n%.2f Seconds --> %.2f Weeks\n\n", time, time / 604800);
        printf("\n%.2f Seconds --> %.2f Months\n\n", time, time / 2628000);
        printf("\n%.2f Seconds --> %.2f Years\n\n", time, time / 31536000);
        printf("\n%.2f Seconds --> %.2f Decades\n\n", time, time / 3153600000);
        break;
    case 2:
        printf("\n%.2f Minutes --> %.2f Seconds\n\n", time, time * 60);
        printf("\n%.2f Minutes --> %.2f Hours\n\n", time, time / 60);
        printf("\n%.2f Minutes --> %.2f Days\n\n", time, time / 1440);
        printf("\n%.2f Minutes --> %.2f Weeks\n\n", time, time / 10080);
        printf("\n%.2f Minutes --> %.2f Months\n\n", time, time / 40320);
        printf("\n%.2f Minutes --> %.2f Years\n\n", time, time / 525960);
        printf("\n%.2f Minutes --> %.2f Decades\n\n", time, time / 525960);
        break;
    case 3:
        printf("\n%.2f Hours --> %.2f Seconds\n\n", time, time * 3600);
        printf("\n%.2f Hours --> %.2f Minutes\n\n", time, time * 60);
        printf("\n%.2f Hours --> %.2f Days\n\n", time, time / 24);
        printf("\n%.2f Hours --> %.2f Weeks\n\n", time, time / 168);
        printf("\n%.2f Hours --> %.2f Months\n\n", time, time / 730);
        printf("\n%.2f Hours --> %.2f Years\n\n", time, time / 8760);
        printf("\n%.2f Hours --> %.2f Decades\n\n", time, time / 87600);
        break;
    case 4:
        printf("\n%.2f Days --> %.2f Seconds\n\n", time, time * 86400);
        printf("\n%.2f Days --> %.2f Minutes\n\n", time, time * 1440);
        printf("\n%.2f Days --> %.2f Hours\n\n", time, time * 24);
        printf("\n%.2f Days --> %.2f Weeks\n\n", time, time / 7);
        printf("\n%.2f Days --> %.2f Months\n\n", time, time / 30.41666666666667);
        printf("\n%.2f Days --> %.2f Years\n\n", time, time / 365);
        printf("\n%.2f Days --> %.2f Decades\n\n", time, time / 36500);
        break;
    case 5:
        printf("\n%.2f Weeks --> %.2f Seconds\n\n", time, time * 604800);
        printf("\n%.2f Weeks --> %.2f Minutes\n\n", time, time * 10080);
        printf("\n%.2f Weeks --> %.2f Hours\n\n", time, time * 168);
        printf("\n%.2f Weeks --> %.2f Days\n\n", time, time * 7);
        printf("\n%.2f Weeks --> %.2f Months\n\n", time, time / 4.345833333333333);
        printf("\n%.2f Weeks --> %.2f Years\n\n", time, time / 52.17391304347826);
        printf("\n%.2f Weeks --> %.2f Decades\n\n", time, time / 521.7391304347826);
        break;
    case 6:
        printf("\n%.2f Months --> %.2f Seconds\n\n", time, time * 2628000);
        printf("\n%.2f Months --> %.2f Minutes\n\n", time, time * 40320);
        printf("\n%.2f Months --> %.2f Hours\n\n", time, time * 730);
        printf("\n%.2f Months --> %.2f Days\n\n", time, time * 30.41666666666667);
        printf("\n%.2f Months --> %.2f Weeks\n\n", time, time * 4.345833333333333);
        printf("\n%.2f Months --> %.2f Years\n\n", time, time / 12);
        printf("\n%.2f Months --> %.2f Decades\n\n", time, time / 120);
        break;
    case 7:
        printf("\n%.2f Years --> %.2f Seconds\n\n", time, time * 31536000);
        printf("\n%.2f Years --> %.2f Minutes\n\n", time, time * 525960);
        printf("\n%.2f Years --> %.2f Hours\n\n", time, time * 8760);
        printf("\n%.2f Years --> %.2f Days\n\n", time, time * 365);
        printf("\n%.2f Years --> %.2f Weeks\n\n", time, time * 52.17391304347826);
        printf("\n%.2f Years --> %.2f Months\n\n", time, time * 12);
        printf("\n%.2f Years --> %.2f Decades\n\n", time, time / 10);
        break;
    case 8:
        printf("\n%.2f Decades --> %.2f Seconds\n\n", time, time * 3153600000);
        printf("\n%.2f Decades --> %.2f Minutes\n\n", time, time * 525960);
        printf("\n%.2f Decades --> %.2f Hours\n\n", time, time * 87600);
        printf("\n%.2f Decades --> %.2f Days\n\n", time, time * 36500);
        printf("\n%.2f Decades --> %.2f Weeks\n\n", time, time * 521.7391304347826);
        printf("\n%.2f Decades --> %.2f Months\n\n", time, time * 120);
        printf("\n%.2f Decades --> %.2f Years\n\n", time, time * 10);
        break;
    default:
        printf("\nInvalid Input\n\n");
        break;
    }
    return 0;
}
int mass()
{
    float mass;
    int unit;

    printf("\nMass\n\n");
    printf("Select the number of The unit you want to convert\n\nKilogram - 1\tGram - 2\n\ntonne - 3\tpound - 4\n\nounce - 5\n\n-->:");
    scanf("%d", &unit);
    system("clear");
    printf("\nEnter the mass you want to convert\n\n-->:");
    scanf("%f", &mass);
    system("clear");
    switch (unit)
    {
    case 1:
        printf("\n%.2f Kilogram --> %.2f Gram\n\n", mass, mass * 1000);
        printf("\n%.2f Kilogram --> %.2f Tonne\n\n", mass, mass / 1000);
        printf("\n%.2f Kilogram --> %.2f Pound\n\n", mass, mass * 2.2046226218487757);
        printf("\n%.2f Kilogram --> %.2f Ounce\n\n", mass, mass * 35.27396194958496);
        break;
    case 2:
        printf("\n%.2f Gram --> %.2f Kilogram\n\n", mass, mass / 1000);
        printf("\n%.2f Gram --> %.2f Tonne\n\n", mass, mass / 1000000);
        printf("\n%.2f Gram --> %.2f Pound\n\n", mass, mass / 453.59237);
        printf("\n%.2f Gram --> %.2f Ounce\n\n", mass, mass / 28.349523125);
        break;
    case 3:
        printf("\n%.2f Tonne --> %.2f Kilogram\n\n", mass, mass * 1000);
        printf("\n%.2f Tonne --> %.2f Gram\n\n", mass, mass * 1000000);
        printf("\n%.2f Tonne --> %.2f Pound\n\n", mass, mass * 2204.62);
        printf("\n%.2f Tonne --> %.2f Ounce\n\n", mass, mass * 35840);
        break;
    case 4:
        printf("\n%.2f Pound --> %.2f Kilogram\n\n", mass, mass / 2.2046226218487757);
        printf("\n%.2f Pound --> %.2f Gram\n\n", mass, mass * 453.59237);
        printf("\n%.2f Pound --> %.2f Tonne\n\n", mass, mass / 2240);
        printf("\n%.2f Pound --> %.2f Ounce\n\n", mass, mass * 16);
        break;
    case 5:
        printf("\n%.2f Ounce --> %.2f Kilogram\n\n", mass, mass / 35.27396194958496);
        printf("\n%.2f Ounce --> %.2f Gram\n\n", mass, mass * 28.349523125);
        printf("\n%.2f Ounce --> %.2f Tonne\n\n", mass, mass / 35840);
        printf("\n%.2f Ounce --> %.2f Pound\n\n", mass, mass / 16);
        break;
    default:
        printf("\nInvalid Input\n\n");
        break;
    }

    return 0;
}
int temperature()
{
    float temperature;
    int unit;

    printf("\nTemperature\n\n");
    printf("Select the number of The unit you want to convert\n\nFahrenheit - 1\tCelsius - 2\n\nKelvin - 3\n\n-->:");
    scanf("%d", &unit);
    system("clear");
    printf("\nEnter the temperature you want to convert\n\n-->:");
    scanf("%f", &temperature);
    system("clear");
    switch (unit)
    {
    case 1:
        printf("\n%.2f Fahrenheit --> %.2f Celsius\n\n", temperature, (temperature - 32) * 5 / 9);
        printf("\n%.2f Fahrenheit --> %.2f Kelvin\n\n", temperature, (temperature - 32) * 5 / 9 + 273.15);
        break;

    case 2:
        printf("\n%.2f Celsius --> %.2f Fahrenheit\n\n", temperature, (temperature * 9 / 5) + 32);
        printf("\n%.2f Celsius --> %.2f Kelvin\n\n", temperature, temperature + 273.15);
        break;
    case 3:
        printf("\n%.2f Kelvin --> %.2f Fahrenheit\n\n", temperature, (temperature - 273.15) * 9 / 5 + 32);
        printf("\n%.2f Kelvin --> %.2f Celsius\n\n", temperature, temperature - 273.15);
        break;
    }
    return 0;
}

char quantity()
{
    char q = 'f';
    printf("1. length - l\n2. Time - t\n3. Mass - m\n4. Temperature - h\n-->:");
    scanf(" %c", &q);
    return q;
}
int main(void)
{
    char rerun;
    do
    {
        printf("\n**********Welcome to unit converter**********\n\n");
        printf("Please enter the quantity you want to convert\n\n");
        char q = quantity();
        system("clear");
        switch (q)
        {
        case 'l':
            length();
            break;
        case 't':
            time();
            break;
        case 'm':
            mass();
            break;
        case 'h':
            temperature();
            break;
        default:
            printf("Invalid input\n\n");
            break;
        }

        printf("To rerun type anything\nTo exit type 'e'\n-->:");
        scanf(" %c", &rerun);
        system("clear");
    } while (rerun != 'e');

    return 0;
}