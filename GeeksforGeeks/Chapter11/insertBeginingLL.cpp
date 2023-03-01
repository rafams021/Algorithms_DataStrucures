#include <iostream>
#include "Header.h"
using namespace std;

Node* insertBeginingLL(Node* head, int val) {
	Node* temp = new Node(val);
	temp->next = head;
	head = temp;
	return head;
}