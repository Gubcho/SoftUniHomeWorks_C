#include <stdio.h>
#include <ctype.h>

void pad_str_with_zeroes (char* str, int pad_len) {
	int i;
	for (i = 0; i < pad_len; i++) {
		if (!isalnum(str[i])) {
			str[i] = '0';
		}
	}

	str[i] = '\0';
}

int main() {
	int a; 
	float b, c;

	printf("a = ");
	scanf("%d", &a);
	//printf("b = ");
	//scanf("%f", &b);
	//printf("c = ");
	//scanf("%f", &c);

	char a_to_hex[] = "0000000000";
	snprintf(a_to_hex, 10, "%x", a);
	pad_str_with_zeroes(a_to_hex, 10);
	
	printf("%s\n", a_to_hex); 	
	return 0;
}