#include <stdio.h>
#include "../environment_new_line.h"

int main() {
	int i, n;
	int sequence_start = 2;
	
	printf("n = ");
	scanf("%d", &n);
	if (n < 1)
	{
		return 0;
	}


	for (i = 0; i < n - 1; i++) {
		if (i % 2 == 0) {
			printf("%d, ", i + sequence_start);
		}
		else {
			printf("%d, ", -(i + sequence_start));
		}
	}

	printf("%d%s", i + sequence_start, NEW_LINE);
	return 0;
}