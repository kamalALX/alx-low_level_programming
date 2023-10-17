#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-entry point
 *
 * Return: always 0 (success)*/

int main(void) {
	int i;
	char arr[100];
	int n = 100;

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		arr[i] = rand() % 256;
	}
	arr[n - 1] = '\0';

	for (i = 0; arr[i] != '\0'; i++) {
		putchar(arr[i] + 48);
	}

	return 0;
}
