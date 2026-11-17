#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float far = temperatura*9/5+32;
	printf("Temperatura: %d degrees\nFahrenheit: %.1f degrees\n", temperatura, far);
	return 0;
}
