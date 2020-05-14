#pragma once
#ifndef HEADER_H
#define HEADER_H

typedef struct student {
	char* ime;
	char* prezime;
	int id;
	struct student* next;
}STUDENT;

STUDENT* createList(void);
STUDENT* insertNewNode(STUDENT*);
int traverseList(STUDENT*);
STUDENT* searchList(STUDENT* traverseNode, int criteria);
void deleteNode(STUDENT** headNode, STUDENT* targetNode);
STUDENT* deleteWholeList(STUDENT* traverseNode);
#endif // !HEADER_H#pragma once
