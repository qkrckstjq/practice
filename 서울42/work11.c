#include <stdio.h>

void ft_swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(void) {
	int a = 10;
	int b = 20;
	int *ap = &a;
	int *bp = &b;
	
	printf("a = %d, b = %d\n",a,b);
	ft_swap(ap, bp);
	printf("a = %d, b = %d",a,b);	

}
