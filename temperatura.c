#include <stdio.h>

int main(void) {
	int temperatura = 25;
	if (temperatura >= 20) {
		printf("Temperatura: %d degrees\nHigh temperature\n", temperatura);
	} else {
		printf("Temperatura: %d degrees\nLow temperature\n", temperatura);
	}
	return 0;
}
