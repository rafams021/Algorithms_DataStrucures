#include <iostream>
#include "Header.h"
using namespace std;

int searchInLL(Node* head, int val) {
	if (head == NULL) return -1;
	int pos = 1;
	Node* tail = head;
	while (tail->next != NULL) {
		if (tail->data == val) return pos;
		tail = tail->next;
		pos++;
	}
	return -1;
}