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
    bool hasCycle(Node* head){
        if (head == NULL) return NULL;
        Node* slow = head;
        Node* fast = head;
        while (fast->next->next != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }

};

int main()
{
    std::vector<int> nums1{ 3, 2, 0, -4 };
    Node* head1 = new Node(nums1[0]);
    Node* curr1 = head1;
    for (int i = 1; i < nums1.size(); i++) {
        curr1->next = new Node(nums1[i]);
        curr1 = curr1->next;
    }

    Solution Cycle;
    bool res = Cycle.hasCycle(head1);
    std::cout << res << std::endl;

    curr1->next = head1;
    res = Cycle.hasCycle(head1);
    std::cout << res << std::endl;
}