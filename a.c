#include <stdio.h>
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int main(int argc, const char *argv[])
{
	int a = 0;
	int b = 5;
	printf("%d  %d\n",a,b);
	swap(&a,&b);
	printf("%d  %d\n",a,b);
	return 0;
}
