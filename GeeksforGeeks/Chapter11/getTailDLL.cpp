#include <iostream>
#include "Header.h"
using namespace std;

Node* getTailDLL(Node* head) {
	if (head == NULL) return NULL;
	if (head->next == NULL) return head;
	Node* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	return tail;
}

Node* getTailCircularDLL(Node* head) {
	if (head == NULL) return NULL;
	if (head->next == NULL) return head;
	Node* tail = head->next;
	while (tail->next != head) {
		tail = tail->next;
	}
	return tail;
}