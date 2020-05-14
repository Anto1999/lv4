#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct oe {
	int x;
	struct oe* sljedeci;
};  
typedef struct oe OE;
OE* prvi = NULL;
OE* p2 = NULL;

int linearSearch(float A[], int n, float x)
{
	int i;
	for (i = 0; i < n; i++)
		if (A[i] == x)return i;
	return -1;
}

void array(float A[], int n, float lb, float ub)
{
	srand(time(NULL));
	int i;
	for (i = 0; i < n; i++)
	{
		float s = (float)rand() / (float)RAND_MAX;
		A[i] = lb + s * (ub - lb);
	}
}

int main() {
	time_t t1, t2,t3,t4;
	int i, sum = 0; OE* novi, * t, * p, * zabr;
	int n = 36000000;
	t1 = clock();
	for (i = 0; i < n; i++) {
		novi = (OE*)malloc(sizeof(OE));
		novi->x = rand()%100;
		novi->sljedeci = prvi;
		prvi = novi;
	}
	t2 = clock();
	printf("Vrijeme formiranja liste je : %dms\n", t2 - t1);
	
	float* d;
	d = (float*)malloc(n * sizeof(float));

	t3 = clock();
	array(d, n, 0, 100);
	t4 = clock();
	printf("Vrijeme formiranja niza je : %dms\n", t4 - t3);
	scanf("%d", &n);
	t1 = clock();
	linearSearch(d, n, 101000);
	t2 = clock();
	printf("Vrijeme sekvencijalnog pretrazivanja  niza je : %dms\n", t2 - t1);
	int trazeniBroj =150;
	t1 = clock();
	for (t = prvi; t != NULL; t = t->sljedeci) {
		if (trazeniBroj == t->x) {
			break;
		}
	}
	t2 = clock();
	printf("Vrijeme sekvencijalnog pretrazivanja  povezane liste je : %dms\n", t2 - t1);
}
	


	