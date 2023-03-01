#include <iostream>
#include "Header.h"
using namespace std;

void printlist(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}