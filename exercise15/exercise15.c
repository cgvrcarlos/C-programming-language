#include <stdio.h>

/* Print Celsius-Fahrenheit table
 * for celsius = 300, 380, ..., 0; floating point version */

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		// Lower limit of temperature scale
	upper = 300;	// Upper limit
	step = 20;		// Step size

	celsius = upper;

	printf("Celsius\t\tFahrenheit\n");

	for(;celsius >= lower; celsius = celsius - step)
	{
		fahr = ((celsius * 9) / 5) + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
	}

	return 0;
}
