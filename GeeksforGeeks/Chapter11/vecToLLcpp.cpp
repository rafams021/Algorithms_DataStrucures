#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

Node* vecToLL(vector<int> vecArr) {
	Node* head = new Node(vecArr[0]);
	if (vecArr.size() == 1) return head;
	Node* tail = head;
	for (int i = 1; i < vecArr.size(); i++) {
		tail->next = new Node(vecArr[i]);
		tail = tail->next;
	}
	return head;
}