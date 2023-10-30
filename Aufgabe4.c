#include <stdio.h>
#include <stdbool.h>
int main() {
	int i = 25, j;
	int zahl = 48;
	j = i + zahl; // i = 23, zahl = 42
	j = j + 1; // erhoehe j um 1
	printf("j hat Wert %d\n", j);
	zahl = 2 * (17 + 4) - 7 / 3;
	printf("zahl hat Wert %d\n", zahl);
	return 0;
}