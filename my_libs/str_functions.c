#include <ctype.h>

#include "stdio.h"
#include "str_functions.h"

bool is_str_empty(char* str) {
	if (str == NULL)
		return false;

	int i = 0;
	while (str[i] != 0) {
		if (!isspace((unsigned char)str[i])) {
			return false;
		}

		i++;
	}

	return true;
}

bool is_str_int(char* str) {
	if (str == NULL)
		return false;

    int i = 0;
    int new_line_code = 10;

	while (str[i] != 0) {
		if (str[i] != new_line_code &&
		   !isdigit((unsigned char)str[i])) {
			return false;
		}

		i++;
	}

	return true;
}

bool is_str_num(char* str) {
	bool num_has_dot = false;

	int i = 0;
	int new_line_code = 10;
	while (str[i] != 0) {
		if (str[i] == '.') {
			if (num_has_dot == true){
				return false;
			} else {
				num_has_dot = true;
			}
		} else if (str[i] != new_line_code &&
			!isdigit((unsigned char)str[i])) {
			return false;
		}

		i++;
	}

	return true;
}

char* trim(char* str) {
	char* end;

	while(isspace(*str)) {
		str++;
	}

	if (*str == 0){
		return str;
	}

	end = str + strlen(str) - 1;
	while(end > str && isspace(*end)) {
		end--;
	}

	*(end+1) = 0;
	return str;
}