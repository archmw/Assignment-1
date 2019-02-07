#include <stdio.h>
#include <string.h>
#include <ctype.h>
int strcmpi(char *first, char *second){
    if(strlen(first) != strlen(second)){
        return -1;
    }
    for(int i = 0; i< strlen(first); i++){
        if(toupper(first[i]) != toupper(second[i])){
            return (first[i] - second[i]);
        }
    }
    return 0;
}
int main() {
	//code
	char first[7] = "Grapes";
	char second[10] = "Apples";
	int result = strcmpi(first,second);
	printf("Result is = %d",result);
    if(result > 0)
        
	return 0;
}