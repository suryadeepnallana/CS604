#include <stdio.h>
int main()
{	//TODO: replace ??? to declare the right type for c and f
	float c, f;
	printf("Input Temp in Fahrenheit: ");
	scanf("%f", &f);
	//TODO: convert fahrenheit to celsius. the formula is
	c = (f - 32) * 5/9;
	//TODO: replace ??? to print out the celsius with two digits to the right of decimal point
	printf("\nTemp in Celsius is: %.3f\n", c);
	return 0;
}
