#include <stdio.h>
#include <string.h>
/*
* This function takes a string
* as input and gives back its reverse
* string as output
* @param: char[50] 
* string length not greater that 50 characters
* @param: length of string
*/
char *strRev(char *inputStr, const int n){
    int i = 0;
    int j = n - 1;
    char temp[n];
    strcpy(temp,inputStr);
    for(; i<strlen(inputStr); i++){
        inputStr[i]= temp[j--];
    }
    return inputStr;
}
int main() {
	//code
	char inString[50] = "Sunbeam";
	char *outString;
	printf("\nInput string is %s",inString);
	outString = strRev(inString, strlen(inString));
	printf("\nOutput Reverse string is %s",outString);
	
	return 0;
}