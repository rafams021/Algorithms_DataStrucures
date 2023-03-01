#include <iostream>
#include "Header.h"
using namespace std;

Node* deleteHeadDLLN(Node* head) {
	if (head == NULL || head->next == NULL) return NULL;
	head = head->next;
	head->prev = NULL;
	return head;
}