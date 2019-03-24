#include <stdlib.h>
#include <stdio.h>

union intWithBytes {
	int x;
	unsigned char bytes[2];
};

int main() {
	union intWithBytes myInt;
	myInt.x = 31235;
	unsigned char *ptr = myInt.bytes;

	printf("bytes is: ");
	for (ptr; ptr < &myInt.bytes[2]; ptr++) {
		printf("%x ", (*ptr));
	}

	return 0;
}