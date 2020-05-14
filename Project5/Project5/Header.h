#ifndef HEADER_H
#define HEADER_H

typedef struct Profesor {
	unsigned short lozinka;
}PROFESOR;typedef struct ucenik {
	char ime[20];
	char prezime[20];
	int oib;
	int ocijena[20];
	int izostanci;
	int izostanak;
	float prosjek;
}UCENIK;

#endif // HEADER_H