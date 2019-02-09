#include<stdio.h>
#include<stdlib.h>
extern int *arr;
void set2DArray(int row, int col){
    int count = 0;
    int *arr = (int *)malloc(row * col * sizeof(int));
    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            *(arr+i*col+j) = ++count;
        }
    }    
    for(int i = 0; i<row;i++){
        for(int j = 0; j<col;j++){
            printf("Arr[%d][%d] = %d, ",i,j,*(arr+i*col+j));
        }
        printf("\n");
    }
    free(arr);
    
}


int main() {
	//code
	set2DArray(4,3);
	return 0;
}