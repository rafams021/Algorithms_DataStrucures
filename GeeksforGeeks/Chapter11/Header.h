#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(Node* head);
Node* vecToLL(vector<int> vecArr);
Node* insertBeginingLL(Node* head, int val);
Node* insertEndLL(Node* head, int val);
Node* deleteFirstLL(Node* head);
Node* deleteLastLL(Node* head);
Node* insertGivenPos(Node* head, int val, int pos);
int searchInLL(Node* head, int val);

Node* vecToDLL(vector<int> vecArr);
Node* insertBeginingDLL(Node* head, int val);
Node* reverseDLL(Node* head);
Node* deleteHeadDLLN(Node* head);
Node* deleteLastDLLN(Node* head);
Node* circularDLLN(Node* head);
Node* insertAtEndDLLN(Node* head, const int val);
void printCircularDLLN(Node* head);
Node* getTailDLL(Node* head);
Node* getTailCircularDLL(Node* head);
Node* insertBeginningCircDLL(Node* head, const int val);
Node* insertEndCircDLL(Node* head, const int val);

#endif // HEADER_H_INCLUDED#pragma once
