#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

Node* vecToDLL(vector<int> vecArr) {
	Node* head = new Node(vecArr[0]);
	if (vecArr.size() == 1) return head;
	Node* tail = head;
	for (int i = 1; i < vecArr.size(); i++) {
		Node* temp = new Node(vecArr[i]);
		tail->next = temp;
		temp->prev = tail;
		tail = tail->next;
	}
	return head;
}