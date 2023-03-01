/* Given an integer array nums, return true if aby value appears at least twice in the array,
   and return false if every element is ditinct*/

#include <iostream>
#include <vector>

struct Node {
    int value;
    Node* next;
    Node(int x) {
        value = x;
        next = NULL;
    }
};

class Solution {
public:
    // Time Complexity O(N)
    Node* reverseList(Node* head) {
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }

};

int main()
{
    std::vector<int> nums{ 1, 2, 3, 4, 5 };
    Node* head = new Node(nums[0]);
    Node* curr = head;
    for (int i = 1; i < nums.size(); i++) {
        curr->next = new Node(nums[i]);
        curr = curr->next;
    }

    Solution Reverse;
    head = Reverse.reverseList(head);

    while (head) {
        std::cout << head->value << std::endl;
        head = head->next;
    }
}