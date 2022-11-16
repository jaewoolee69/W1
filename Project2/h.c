#include <stdio.h>

void main() {


	char str[10] = "ABC";

	char* p = &str;

		
	printf("%c\n", *(str+1));
	printf("%s\n", p+1);
	/*printf("%s\n", str[1]);
	printf("%c\n", str[1][1]);*/



}