#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int linearSearch(float A[], int n, float x);
void array(float A[], int n, float lb, float ub);

struct node {
	int data;
	struct node* next;
};

node* newList(int size) {
	node* head = new node;
	node* p = head;
	p->data = 0;
	for (int i = 1; i < size; i++) {
		p->next = new node;
		p = p->next;
		p->data = i;
	}
	p->next = NULL;
	return head;
};

bool listSearch(node* head, int value) {
	node* p = head;
	while (p != NULL) {
		if (p->data == value) return true;
		p = p->next;
	}

	return false;
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

int linearSearch(float A[], int n, float x)
{
	int i;
	for (i = 0; i < n; i++)
		if (A[i] == x)return i;
	return -1;
}

int main() {
	int n = 27000000;
	float* d;
	d = (float*)malloc(n * sizeof(float));
	time_t t1, t2;
	t1 = clock();
	array(d, n, 0, 100);
	t2 = clock();
	printf("Vrijeme formiranja niza je : %dms\n", t2 - t1);
	t1 = clock();
	struct node* list = newList(n);
	t2 = clock();
	printf("Vrijeme formiranja liste je : %dms\n", t2 - t1);

	t1 = clock();
	linearSearch(d, n, 101);
	t2 = clock();
	printf("Vrijeme sekvencijalnog pretrazivanja  niza je : %dms\n", t2 - t1);
	t1 = clock();
	listSearch(list, n);
	t2 = clock();
	printf("Vrijeme sekvencijalnog pretrazivanja  liste je : %dms\n", t2 - t1);

	system("pause");
	return 0;
}