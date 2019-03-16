#include <stdio.h>

int main() {
	
	int tri = 0;

	for (int i = 0; i < 100; i++) {
		tri = i * (i + 1) / 2;

		printf("%d\n", tri);
	}

	return 0;
}