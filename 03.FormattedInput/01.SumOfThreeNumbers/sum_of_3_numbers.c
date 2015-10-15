#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/str_functions.h"

#define LINE_MAX 20

double console_read_double (char* line_buffer, int buffer_len) {
	line_buffer = fgets(line_buffer, buffer_len, stdin);
	assert(line_buffer != NULL && line_buffer != "");
	assert(!is_str_empty(line_buffer));
	assert(is_str_num(line_buffer));

	double num = strtod(line_buffer, NULL);
	return num;
}

int main() {
	double first_num, second_num, third_num;
	char line[LINE_MAX];

	printf("n1 = ");
	first_num = console_read_double(line, LINE_MAX);
	printf("n2 = ");
	second_num = console_read_double(line, LINE_MAX);
	printf("n3 = ");
	third_num = console_read_double(line, LINE_MAX);
	
	printf("sum %lf\n", first_num + second_num + third_num);
	return 0;
}