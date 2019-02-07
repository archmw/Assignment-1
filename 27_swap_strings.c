/*
* Swap two strings using pointers
*/
#include <stdio.h>
#include <string.h>
void swapString(char **str1, char **str2){
    char *temp;
    temp = *str1;
    *str1 = *str2;
    *str2 = temp;
   
   
}
int main() {
	//code
	char *str1 = "Apple";
	char *str2 = "Green";
	printf("str1 = %s, str2 = %s",str1,str2);
	swapString(&str1,&str2);
	printf("\nstr1 = %s, str2 = %s",str1,str2);
	return 0;
}