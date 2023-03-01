#include <iostream>
#include "Header.h"
using namespace std;

Node* insertBeginingDLL(Node* head, int val) {
	Node* temp = new Node(val);
	temp->next = head;
	head->prev = temp;
	return temp;
}