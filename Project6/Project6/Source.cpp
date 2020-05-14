#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int polje[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <4 ; j++) {
			scanf("%d", &polje[i][j]);
		}
	}
	printf("\n\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <4 ; j++) {
			printf("%d \t", polje[i][j]);
		}
		printf("\n");

	}
	for (int i = 0; i < 4; i++)for (int j = 4; j < 0; j--) {
		printf("%d \t", polje[i][j]);
	}
}