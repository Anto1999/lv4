#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct cvor {

	char x;
	struct cvor* left;
	struct cvor* right;

}cvor;

cvor* korijen = NULL;
cvor* nadredjeni = NULL;


int nadjiP(char x) {

	cvor* cvor1 = korijen;
	int nadjen = 0;
	nadredjeni = NULL;

	if (cvor1 == NULL) {

		nadjen = -1;
		return -1;
	}

	while (true) {

		if (cvor1->x == x) {

			nadjen = 1;
		}
		else {

			nadredjeni = cvor1;

			if (x < cvor1->x) {
				if (cvor1->left != NULL) cvor1 = cvor1->left;
				else nadjen = -1;
			}
			else {
				if (cvor1->right != NULL) cvor1 = cvor1->right;
				else nadjen = -1;
			}
		}

		if (nadjen == 1 || nadjen == -1) break;
	}

	return nadjen;

}


void dodajP(char x) {

	cvor* n;
	int nadjen = 0;
	nadjen = nadjiP(x);

	if (nadjen == 1) {

		return;
	}
	else {

		n = (cvor*)malloc(sizeof(cvor));
		n->x = x;
		n->left = n->right = NULL;

		if (nadredjeni == NULL) {

			korijen = n;
		}
		else {

			if (x < nadredjeni->x) nadredjeni->left = n;
			else nadredjeni->right = n;
		}
	}

}


void preOrder(cvor * korijen) {

	if (korijen == NULL) {

		return;
	}
	else {

		printf("%c,\t", korijen->x);
		preOrder(korijen->left);
		preOrder(korijen->right);
	}

}

void inOrder(cvor * korijen) {

	if (korijen == NULL) {

		return;
	}
	else {

		inOrder(korijen->left);
		printf("%c,\t", korijen->x);
		inOrder(korijen->right);
	}

}

void postOrder(cvor * korijen) {

	if (korijen == NULL) {

		return;
	}
	else {

		postOrder(korijen->left);
		postOrder(korijen->right);
		printf("%c, \t", korijen->x);
	}

}


int main() {


	char polje[] = { 'a','n','t','o','i', 'v', 'i','c', '\0' };

	for (int i = 0; i < strlen(polje); i++) {
		dodajP(polje[i]);
	}

	preOrder(korijen);
	printf("\n");
	inOrder(korijen);
	printf("\n");
	postOrder(korijen);
	printf("\n");

	return 0;
}