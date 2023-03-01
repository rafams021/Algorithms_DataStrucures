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
    Node* mergeTwoList(Node* head1, Node* head2) {
        if (!head1 && !head2) return NULL;
        if (!head1) return head2;
        if (!head2) return head1;
        Node* finalHead;
        if (head1->value <= head2->value) {
            finalHead = head1;
            head1 = head1->next;
        }
        else {
            finalHead = head2;
            head2 = head2->next;
        }
        Node* tail = finalHead;
        while (head1 && head2) {
            if (head1->value <= head2->value) {
                tail->next = head1;
                head1 = head1->next;
                tail = tail->next;
            }
            else {
                tail->next = head2;
                head2 = head2->next;
                tail = tail->next;
            }
        }
        if (head1) tail->next = head1;
        if (head2) tail->next = head2;
        return finalHead;
    }

};

int main()
{
    std::vector<int> nums1{ 1, 2, 4};
    std::vector<int> nums2{ 1, 3, 4 };
    Node* head1 = new Node(nums1[0]);
    Node* curr1 = head1;
    for (int i = 1; i < nums1.size(); i++) {
        curr1->next = new Node(nums1[i]);
        curr1 = curr1->next;
    }

    Node* head2 = new Node(nums2[0]);
    Node* curr2 = head2;
    for (int i = 1; i < nums2.size(); i++) {
        curr2->next = new Node(nums2[i]);
        curr2 = curr2->next;
    }

    Solution Merge;
    Node* head = Merge.mergeTwoList(head1, head2);

    while (head) {
        std::cout << head->value << std::endl;
        head = head->next;
    }
}