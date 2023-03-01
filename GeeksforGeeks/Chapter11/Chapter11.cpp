// Chapter11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"

int main()
{
    vector<int> vecArr{ 1, 2, 3, 4, 5 };
    /*Single Linked List*/
#if(0)
    Node* head = vecToLL(vecArr);
    head = insertBeginingLL(head, 0);
    head = insertEndLL(head, 6);
    head = deleteFirstLL(head);
    head = deleteLastLL(head);
    head = insertGivenPos(head, 10, 3);
    printlist(head);
    int pos = searchInLL(head, 10);
    cout << pos << endl;
#endif
    /*End of single linked list*/

    /*Double Linked List*/
    Node* head = vecToDLL(vecArr);
    head = circularDLLN(head);
    Node* tail = getTailCircularDLL(head);
    printCircularDLLN(head);
    head = insertBeginningCircDLL(head, 0);
    printCircularDLLN(head);
    head = insertEndCircDLL(head, 6);
    printCircularDLLN(head);
}
