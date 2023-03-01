#include <iostream>
#include "Header.h"
using namespace std;

Node* deleteFirstLL(Node* head) {
	Node* temp = head->next;
	delete head;
	head = temp;
	return head;
}