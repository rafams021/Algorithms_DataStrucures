#include <iostream>
#include "Header.h"

Node* insertGivenPos(Node* head, int val, int pos) {
	Node* temp = new Node(val);
	if (pos == 1) {
		temp->next = head;
		return temp;
	}
	Node* tail = head;
	for (int i = 1; i < pos - 1 && tail != NULL; i++) {
		tail = tail->next;
	}
	if (tail == NULL) {
		return head;
	}
	temp->next = tail->next;
	tail->next = temp;
	return head;
}