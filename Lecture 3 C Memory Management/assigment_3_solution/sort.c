#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Sort an array A using insertion sort. Notice it is to be passed by reference.
void sort(int A[], int n) {
	int tmp;
	int *ptr_j = A;

	for (int *ptr_i = &A[1]; ptr_i < &A[n]; ptr_i++) {
		tmp = *(ptr_i);
		ptr_j = ptr_i - 1;
		//For each element in A, search for where it belong in the subarray preceeding it's current location
		while (tmp < *(ptr_j) && ptr_j >= &A[0]) {
			//A[j + 1] = A[j];
			int *next_ptr = ptr_j + 1;
			*next_ptr = *(ptr_j);
			ptr_j = ptr_j - 1;
		}
		ptr_i = ptr_i + 1;
		int *next_ptr = ptr_j + 1;
		*next_ptr = tmp;
	}
}

int main() {
	//Allows use to generate random numbers
	srand(time(NULL));
	setbuf(stdout, NULL);

	//Read a user input integer and store it in n
	int n;
	printf("Enter an integer n: ");
	scanf("%d", &n);

	//Array array. Change this to become a dynamic array through malloc.
	int * array = (int *)malloc(n * sizeof(int));

	//Assign each element in the array a random number between 0 and 31,999
	for (int *ptr = array; ptr < &array[n]; ptr++) {
		*ptr = rand() % 32000;
	}

	//Prints out the elements of the unsorted array
	printf("The unsorted array is: ");
	for (int *ptr = array; ptr < &array[n]; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");

	//Calls the sort function to sort the array
	sort(array, n);

	//Print out the elements of the now (supposedly) sorted array.
	printf("The sorted array is: ");
	for (int *ptr = array; ptr < &array[n]; ptr++) {
		printf("%d ", *ptr);
	}
	printf("\n");
	free(array);
	return 0;

}