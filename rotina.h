#include <stdio.h>
#include <string.h>
#include <locale.h>
void sub_rotina1()
{
	printf("mostrando uma mensagem ");
}
void sub_rotina2()
{
	int a,b,c;
	printf("\nDigite o valor de a: ");
	scanf("%d%*c",&a);
	printf("\nDigite o valor de b: ");
	scanf("%d%*c",&b);
	c=a-b;
	printf("\nResultado = %d \n", c);
}
int sub_rotina3(int x, int y)
{
	int res;
	res = x*y;
	return res;
}