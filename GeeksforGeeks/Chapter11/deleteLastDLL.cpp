#include <iostream>
#include "Header.h"

Node* deleteLastDLLN(Node* head) {
	if (head == NULL || head->next == NULL) return NULL;
	Node* tail = head;
	while (tail->next->next != NULL) {
		tail = tail->next;
	}
	tail->next = NULL;
	return head;
}