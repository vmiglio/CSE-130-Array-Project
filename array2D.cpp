#include <iostream>
#include <time.h>

using namespace std;

int main() {

	int start = time(NULL);
	int arr[2][18] = {
		{ 1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1 },
		{ 9,8,7,6,5,4,3,2,1,1,2,3,4,5,6,7,8,9 }
	};

	for (int k = 0; k < 100000; k++) {
		srand(time(NULL));
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 18; j++) {
				cout << arr[i][j] << " ";
			}
			cout << endl;
		}
	}
	int end = time(NULL);
	cout << "that took " << end - start << "seconds" << endl;

	return 0;
}
