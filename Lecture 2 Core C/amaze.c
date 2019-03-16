#include <stdio.h>
void amaze1() {
	int i;
	printf("amaze1:\t");
	for (i = 0; i <= 10; i++) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

void amaze2() {
	int i = 0;
	printf("amaze2:\t");
	while (i <= 10) {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");
}

void amaze3() {
	int i = 0;
	printf("amaze3:\t");
	do {
		if (i % 2 == 1) {
			printf("%d ", i);
		}
		i++;
	} while (i <= 10);
	printf("\n");
}

void amaze4() {
	int i = 0;
	printf("amaze4:\t");
	loopstart:
	if (i % 2 == 1) {
		printf("%d ", i);
	}
	i++;
	if (i <= 10) {
		goto loopstart;
	}
	printf("\n");
}

void amaze5() {
	int i;
	printf("amaze5:\t");
	for (i = 0; i <= 10; i++) {
		int rem = i % 2;
		switch (rem) {
			case 1:
				printf("%d ", i);
			default:
				break;
		}
	}
	printf("\n");
}

void amaze6() {
	int i = 0;
	printf("amaze6:\t");
	while (i <= 10) {
		int rem = i % 2;
		switch (rem) {
			case 1:
				printf("%d ", i);
			default:
				break;
		}
		i++;
	}
	printf("\n");
}

void amaze7() {
	int i = 0;
	printf("amaze7:\t");
	do {
		int rem = i % 2;
		switch (rem) {
			case 1:
				printf("%d ", i);
			default:
				break;
		}
		i++;
	} while (i <= 10);
	printf("\n");
}

void amaze8() {
	int i = 0;
	printf("amaze8:\t");
	int rem = 0;
loopstart:
	rem = i % 2;
	switch (rem) {
		case 1:
			printf("%d ", i);
		default:
			break;
	}
	i++;
	if (i <= 10) {
		goto loopstart;
	}
	printf("\n");
}


int main(int argc, char ** argv) {
	amaze1();
	amaze2();
	amaze3();
	amaze4();
	amaze5();
	amaze6();
	amaze7();
	amaze8();
}