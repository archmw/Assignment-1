#include <stdio.h>
int strcmp (char *first, char *second);

int strcmp(char *first, char *second){
    while(*first == *second){
        ++first;
        ++second;
    }
    return (*first - *second);
}
int main() {
	//code
	char first[7] = "Grapes";
	char second[10] = "Red Apple";
	int result = strcmp(first,second);
	printf("Result is = %d",result);
	return 0;
}