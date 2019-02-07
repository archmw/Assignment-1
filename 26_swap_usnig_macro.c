/*
* swap two integers using macro
*/
#include <stdio.h>
#define swap(a,  b) a = a+b;b = a-b;a = a-b
#define swap_xor(x,y) x=x^y;y=y^x;x = x^y
#define swap_temp(p,q) int temp = p; p = q; q = temp
int main() {
	//code
	int i =512, j=1024;
	swap(i,j);
	printf("\n i =%d, j =%d",i,j);
	swap_xor(i,j);
	printf("\n one more swap: i = %d, j = %d",i,j);
	swap_temp(i,j);
	printf("\n swap once again: i = %d, j = %d",i,j);
	return 0;
}