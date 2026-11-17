#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float far = temperatura*9/5+32;
	if (temperatura >= 20) {
		printf("Temperatura: %d degrees\nFahrenheit: %.1f degrees\nHigh temperature\n", temperatura, far);
	} else {
		printf("Temperatura: %d degrees\nFahrenheit: %.1f degrees\nLow temperature\n", temperatura, far);
	}
	return 0;
}
