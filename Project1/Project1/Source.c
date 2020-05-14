#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct profesor {
	int lozinka;
}PROFESOR;

int main() {
	printf("E-dnevnik:\n");
	int redniBroj;
	printf("ODABERITE =>PROFESOR:\n 1.)Drazen Baric\n 2.)Ivan Josipovic\n 3.)Mislav Alpeza\n");	scanf("%d", &redniBroj);	PROFESOR profesori[3] = { 0 };
	PROFESOR* pokS = profesori;	printf("Unesite lozinku:\n");
	
		if (redniBroj = 1) {
			scanf("%d", &pokS->lozinka);
			if (pokS->lozinka == 1000) {
				printf("Dobro dosli u e-Dnevnik");
			}
			else {
				printf("Kriva lozinka\n");
			}
		}

		if (redniBroj = 2) {
			scanf("%f", &pokS->lozinka);
			if (pokS->lozinka == 2000) {
				printf("Dobro dosli u e-Dnevnik");
			}
			else {
				printf("Kriva lozinka\n");
			}
		}
	
			if (redniBroj = 3) {
				scanf("%f", &pokS->lozinka);
				if (pokS->lozinka == 3000) {
					printf("Dobro dosli u e-Dnevnik");
				}
				else {
					printf("Kriva lozinka\n");
				}
			}
			
	
	int broj;
	scanf("%d", &broj);
	switch (broj)

	{
	case 0:
	
		break;
	case 1:
		
		break;
	case 2:
		
		break;
	case 3:
	
		break;
	
	default:
		
		break;
	}
}