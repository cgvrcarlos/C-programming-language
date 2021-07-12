#include <stdio.h>

/* Print Celsius-Fahrenheit table
	for celsius = 300, 380, ..., 0 */

int main()
{
	int fahr;
	float celsius;
	
	for (fahr = 300; fahr >= 0; fahr = fahr = fahr -20)
	{
		celsius = (5.0/9.0) * (fahr-32);
		printf("%3d %6.1f\n", fahr, celsius);
	}
}
