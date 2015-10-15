#include "stdio.h"
#include "str_functions.h"

/*
This function considers any char that is not in the range [32..126] to
be an empty_char. When it sees '\0' symbol it breaks !
*/
bool is_str_empty(char* str) {
	if (str == NULL)
		return false;

	int i = 0;
	while (str[i] != 0) {
		printf("%d\n", str[i]);
		if (str[i] > 32 && str[i] < 126) {
			return false;
		}

		i++;
	}

	return true;
}

/*
Tests if a string consists of only digits from 0..9.
*/
bool is_str_int(char* str) {
	if (str == NULL)
		return false;

	int i = 0;
	int new_line_code = 10;
	while (str[i] != 0) {
		if (str[i] != new_line_code && (str[i] < 48 || str[i] > 57)) {
			return false;
		}

		i++;
	}

	return true;
}

/*
Tests if a string consists of only digits from 0..9 
an only one possible "." symbol.
*/
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
		} else if (str[i] != new_line_code && (str[i] < 48 || str[i] > 57)) {
			return false;
		}

		i++;
	}	

	return true;
}