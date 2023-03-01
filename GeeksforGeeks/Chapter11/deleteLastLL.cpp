#include <iostream>
#include "Header.h"
using namespace std;

Node* deleteLastLL(Node* head) {
	if (head == NULL) return NULL;
	Node* tail = head;
	while (tail->next->next != NULL) {
		tail = tail->next;
	}
	delete tail->next;
	tail->next = NULL;
	return head;
}