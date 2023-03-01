#include <iostream>
#include "Header.h"
using namespace std;

Node* insertEndCircDLL(Node* head, const int val) {
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
		head->prev = temp;
		return head;
	}
	Node* tail = head->next;
	while (tail->next != head) {
		tail = tail->next;
	}
	tail->next = temp;
	temp->prev = tail;
	temp->next = head;
	head->prev = temp;
	return head;
}