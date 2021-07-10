#include <stdio.h>

/* Print Celsius-Fahrenheit table
 * for celsius = 0, 20, ..., 300*/

int main()
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;		/* Lower limit of temperature scale */
	upper = 300; 	/* Upper Limit */
	step = 20;		/* Step size */

	celsius = lower;

	printf("Celsius\t\tFahrenheit\n");

	while(celsius <= upper)
	{
		fahr = ((celsius * 9) / 5) + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
