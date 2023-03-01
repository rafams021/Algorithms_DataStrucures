#include <iostream>
#include "Header.h"

Node* reverseDLL(Node* head) {
	if (head == NULL || head->next == NULL) return head;
	Node* prev = NULL;
	Node* tail = head;
	while (tail != NULL) {
		prev = tail->prev;
		tail->prev = tail->next;
		tail->next = prev;
		tail = tail->prev;
	}
	return prev->prev;
}