#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void gen_arr(float V[], int n, float dg, float gg) { 
//	for (int i = 0; i < n; i++) {
//	//		V[i] = dg + (float)rand() / RAND_MAX * (gg - dg);
//	}
//}
//int sekv_pret(float V[], int n, float x) {
//	for (int i = 0; i < n; i++) {
//		if (V[i] == x) {
//			return i;
//		}
//		else
//			return -1;
//	}
//}
//
//void sort(float V[], int n) {//	float swap;
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (V[j] > V[j + 1]) 
//			{
//				swap = V[j];
//				V[j] = V[j + 1];
//				V[j + 1] = swap;
//			}
//		}
//	}//}//int bin_pret(float V[], int n, float x) {
//	int dg = 0;
//	int gg = n - 1;
//	int s = -1;
//	while (dg <= gg) {
//		s = (dg + gg) / 2;
//		if (V[s] == x) {
//			return s;
//		}
//		else if (V[s] > x) {
//			gg = s - 1;
//		}
//		else {
//			dg = s + 1;
//		}
//	}
//	return -1;
//	
//
//
//}
//
//int main(void) {
//	float V[10000];
//	float dg = 0.5;
//	float gg = 0.6;
//	int n = 10000;
//	time_t t1, t2;//
//	srand((unsigned)time(NULL));
//	gen_arr(V, n,dg, gg);
//	for (int i = 0; i < n; i++) {
//		printf("%f \n", V[i]);
//	}
//	int index;
//	t1 = clock();
//	index=sekv_pret(V, n, 0.567299);
//	t2 = clock();
//	printf("Index sekvencijalnog pretrazivanja: %d \n",index);
//	printf("Vrijeme trajanja sekvencijalnog pretrazivanja je %d ms\n", t2 - t1);
//	sort(V, n);
//	for (int i = 0; i < n; i++) {
//		printf("%f \n", V[i]);
//	}
//	t1 = clock();
//	index=bin_pret(V, n, 0.567299);
//	t2 = clock();
//	printf("Index binarnog pretrazivanja: %d \n", index);
//	printf("Vrijeme trajanja binarnog pretrazivanja je %d ms\n", t2 - t1);
//	return 0;
//}

int main() {
	int polje[6] = { 1,2,3,4,5,6 };
	int n = 6;
	int trazeniBroj = 5;

	int dg = 0;
	int gg = n - 1;
	int s;
	while (dg <= gg) {
		s = (dg + gg) / 2;
		if (polje[s] == trazeniBroj) {
			 printf("%d",s);
			 break;
		}
		else if (polje[s] > trazeniBroj) {
			gg = s - 1;
		}
		else {
			dg = s + 1;
		}
	}
	return -1;

}