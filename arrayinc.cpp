#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int start = time(NULL);
	int array[36] = { 1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1 };

	for (int k = 0; k < 100000; k++) {
		srand(time(NULL));
		for (int i = 0; i < 36; i++) {
			cout<< array[i];
		}
		cout << endl;
	}
	int end = time(NULL);
	cout << "That took" << end - start << "seconds" << endl;

	return 0;
}