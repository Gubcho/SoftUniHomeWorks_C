#include <stdio.h>
#include <ctype.h>
#include <string.h>

void trim(char *str) {
	int i;
	int begin = 0;
	int end = strlen(str) - 1;

	while (isspace(str[begin]))
		begin++;

	while ((end >= begin) && isspace(str[end]))
		end--;

	// Shift all characters back to the start of the string array.
	for (i = begin; i <= end; i++)
		str[i - begin] = str[i];

	str[i - begin] = '\0'; // Null terminate string.
}

int main() {
	char* txt = "abc";
	trim(txt);
	//printf("%s\n", txt);
	return 0;
}