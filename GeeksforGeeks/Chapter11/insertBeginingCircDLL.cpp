#include <iostream>
#include "Header.h"
using namespace std;

Node* insertBeginningCircDLL(Node* head, const int val) {
	Node* temp = new Node(val);
	if (head == NULL) {
		temp->next = temp;
		temp->prev = temp;
		return temp;
	}
	if (head->next == head) {
		temp->next = head;
		temp->prev = head;
		head->next = temp;
		head->prev - temp;
		return temp;
	}
	Node* tail = head->next;
	while (tail->next != head) {
		tail = tail->next;
	}
	temp->next = head;
	head->prev = temp;
	temp->prev = tail;
	tail->next = temp;
	return temp;
}