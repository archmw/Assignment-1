#include <stdio.h>
#include <string.h>
int main() {
	//code
	char first[7] = "Grapes";
	char second[10] = "Grab";
	int result = strcmp(first,second);
	printf("Result is = %d",result);
	return 0;
}