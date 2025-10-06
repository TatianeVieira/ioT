#include <stdio.h>
#include <locale.h>

int sinal(int n) {
	if(n>0) return 1;
	if(n<0) return 0;
	return 2;
}