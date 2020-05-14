#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

 int main() {
	 int Polje[5];
	 for (int i = 0; i < 30; i++) {
		 Polje[i] = rand();
	 }
	 for (int i = 0; i < 30; i++){
		 printf("%d\n", Polje[i]);
	 }
	 printf("\n\n");
	 int c, d, swap;

	 for (c = 0; c < 30 - 1; c++)
	 {
		 for (d = 0; d < 30 - c - 1; d++)
		 {
			 if (Polje[d] > Polje[d + 1]) /* For decreasing order use < */
			 {
				 swap = Polje[d];
				 Polje[d] = Polje[d + 1];
				Polje[d + 1] = swap;
			 }
		 }
	 }


	 for (int i = 0; i < 30; i++) {
		 printf("%d\n", Polje[i]);
	 }
	 
	 scanf("%d", &c);

 }
