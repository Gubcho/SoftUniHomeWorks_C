#include <stdio.h>

int main() {
	char i = 0;

	for (i = 0; i < 34; i++) {
		printf("@ ");
	}

	for (int i = 33; i < 127; i++) {
		printf("%c ", i);
	}

	for (int i = 127; i < 255; i++) {
		printf("@ ");
	}

	return 0;
}