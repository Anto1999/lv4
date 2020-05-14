
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"Header.h"


int main(void)
{
	int tempId;
	STUDENT* headNode = createList();
	headNode = insertNewNode(headNode);
	headNode = insertNewNode(headNode);
	headNode = insertNewNode(headNode);
	headNode = insertNewNode(headNode);
	printf_s("Broj elemenata u popisu: %d", traverseList(headNode));
	printf_s("Unesite Id trazenog studenta: ");
	scanf_s("%d", &tempId);
	STUDENT* targetNode = searchList(headNode, tempId);
	deleteNode(&headNode, targetNode);
	printf("Broj elemenata u popisu: %d", traverseList(headNode));
	headNode = deleteWholeList(headNode);
	return 0;
}


