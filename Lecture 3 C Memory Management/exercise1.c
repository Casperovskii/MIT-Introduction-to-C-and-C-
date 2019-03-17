#include <stdio.h>
void square(int* ptr) {
	*ptr = (*ptr) * (*ptr);
}
int main() {
	int x = 4;
	int *ptr = &x;
	square(ptr);
	printf("%d\n", x);
	return 0;
}
