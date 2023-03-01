#include <iostream>
#include "Header.h"
using namespace std;

Node* insertEndLL(Node* head, int val) {
	Node* tail = head;
	Node* temp = new Node(val);
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = temp;
	return head;
}