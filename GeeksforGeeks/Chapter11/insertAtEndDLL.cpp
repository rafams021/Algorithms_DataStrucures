#include <iostream>
#include "Header.h"
using namespace std;

Node* insertAtEndDLLN(Node* head, const int val) {
	Node* temp = new Node(val);
	if (head == NULL) {
		return temp;
	}
	if (head->next == NULL) {
		head->next = temp;
		return head;
	}
	Node* tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = temp;
	return head;
}