#include <stdio.h>

int main() {
	int A[9], B[10], C[10], D[10];
	int br = 0;
	for (int i = 1; i < 10; i++) {
		A[i] = i;
		for (int j = 0; j < 10; j++) {
			B[i] = i;
			for (int k = 0; k < 10; k++) {
				C[k] = k;
				for (int m = 0; m < 10; m++) {
					D[m] = m;
					if (A[i] != B[j] != C[k] != D[m]) {
						br++;
					}

				}
			}
		}

	}
	printf("%d", br);

}