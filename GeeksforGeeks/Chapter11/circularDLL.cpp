#include <iostream>
#include "Header.h"
using namespace std;

Node* circularDLLN(Node* head) {
	if (head == NULL) return NULL;
	if (head->next == NULL) {
		head->next = head;
		head->prev = head;
		return head;
	}
	Node* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	head->prev = tail;
	tail->next = head;
	return head;
}