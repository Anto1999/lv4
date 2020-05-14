#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

void unosImenaPrezime(STUDENT* tempNode)
{
	tempNode->ime = (char*)calloc(20, sizeof(char));
	tempNode->prezime = (char*)calloc(20, sizeof(char));
	printf("Unesite ime: ");
	scanf("%19s", tempNode->ime);
	printf("Unesite prezime: ");
	scanf("%19s", tempNode->prezime);
}

STUDENT* createList(void)
{
	STUDENT headNode = (STUDENT)calloc(3, sizeof(STUDENT));

	if (headNode == NULL) {
		perror("Kreiranje");
		return NULL;
	}
	else {
		unosImenaPrezime(headNode);
		printf("Unesite id studenta: \n");
		scanf("%d", &headNode->id);
		headNode->next = NULL;
	}
	return headNode;
}

STUDENT* insertNewNode(STUDENT* headNode)
{
	STUDENT* newHeadNode = (STUDENT*)calloc(3, sizeof(STUDENT));

	if (newHeadNode == NULL)
	{
		perror("Kreiranje");
		return headNode;
	}
	else
	{
		unosImenaPrezime(newHeadNode);
		printf("Unesite id studenta: \n");
		scanf("%d", &newHeadNode->id);
		newHeadNode->next = headNode;
	}
	return newHeadNode;
}

int traverseList(STUDENT* traverseNode)
{
	int counter = 0;

	if (traverseNode == NULL)
	{
		return -1;
	}
	else
	{
		while (traverseNode)
		{
			counter++;
			printf("Student br %d\nIme: %s\nPrezime: %s\nId: %d\n", counter, traverseNode->ime, traverseNode->prezime, traverseNode->id);
			traverseNode = traverseNode->next;
		}
	}
	return counter;
}

STUDENT* searchList(STUDENT* traverseNode, int criteria)
{
	while (traverseNode) {
		if (traverseNode->id == criteria)
			return traverseNode;
		else
			traverseNode = traverseNode->next;
	}
	return NULL;
}

void deleteNode(STUDENT * *headNode, STUDENT * targetNode)
{
	if (*headNode == targetNode) {
		*headNode = (*headNode)->next;
		free(targetNode->ime);
		free(targetNode->prezime);
		free(targetNode);
		printf("Oslobodjen chvooor: %p\n", targetNode);
	}
	else {
		STUDENT* traverseNode = *headNode;

		while (traverseNode->next)
		{
			if (traverseNode->next == targetNode) {
				traverseNode->next = targetNode->next;
				free(targetNode->ime);
				free(targetNode->prezime);
				free(targetNode);
				printf("Oslobodjen chvooor: %p\n", targetNode);
				break;
			}
			traverseNode = traverseNode->next;
		}
	}
}

STUDENT* deleteWholeList(STUDENT * traverseNode)
{
	STUDENT* deleteNode = NULL;

	while (traverseNode) {
		deleteNode = traverseNode;
		traverseNode = traverseNode->next;
		free(deleteNode->ime);
		free(deleteNode->prezime);
		free(deleteNode);
		printf("Oslobodjen chvooor: %p\n", deleteNode);
	}
	return NULL;
}