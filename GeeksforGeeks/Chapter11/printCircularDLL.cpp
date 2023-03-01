#include <iostream>
#include "Header.h"
using namespace std;

void printCircularDLLN(Node* head) {
	Node* temp = head;
	cout << temp->data << " ";
	temp = temp->next;
	while (temp != head) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}