#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*

	Learned how to convert to integer using
	https://www.tutorialspoint.com/how-do-i-convert-a-char-to-an-int-in-c-and-cplusplus

	Found out from Quora that chars are 1 byte each
	https://www.quora.com/What-is-a-byte-array-in-C

	Learned how to use malloc() using
	https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/

	*/

	int requestedMB = atoi(argv[1]);
	int mbToBytes = requestedMB * 1000000;

	char* myArray = (char*)malloc(mbToBytes);

	printf("Process ID: %d\n", getpid());
	printf("Number of bytes: %d\n", mbToBytes);

	while(1) {
		for (int counter = 0; counter < mbToBytes; counter++) {
			myArray[counter] = 0;
		}
	}

	return 0;
}
