#include <stdio.h>
#include <inttypes.h>
#include "../environment_new_line.h"

double newton_sqrt(int x) {
	int prev,k = 0;
	int accuracy = 10000;
	double s = 1;

	for(k = 0; k < accuracy; k++) {
		prev = s;
		s = (s + x / s) / 2;
		if(prev == s) {
			break;
		}
	}

	return s;
}

int main() {
	int number = 0;
	printf("number: ");
	scanf("%d", &number);
	printf("%.14lf%s", newton_sqrt(number), NEW_LINE);
	return 0;
}