#include<stdio.h>
void swap(int *a, int *b);
int main() {
	int m = 22, n = 44;
// calling swap function by reference
	printf("values before swap m = %d and n = %d\n",m,n);
	swap(&m, &n);
}
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("values after swap m = %d and n = %d", *a, *b);
}
