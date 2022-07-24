#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>



int main() {
	int start = time(NULL);
	int array[36] = { 1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1};
	
	for (int k = 0; k < 100000; k++) {
		for (int i = 0; i < 36; i++) {
			printf("%d ", array[i]);
		}
		printf("\n");
	}
	int end = time(NULL);
	printf("That took %d seconds\n", end - start);
	
	return 0;
}
