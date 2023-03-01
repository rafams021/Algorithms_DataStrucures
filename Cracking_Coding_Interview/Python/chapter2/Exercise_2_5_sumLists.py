# Exercise 2.5
# You have two numbers represented by a linked list, where each node contains
# a single digit. The digits are stored in reverse order, such that the first
# digit is at the head of the list. Write a function that adds the two numbers
# and return the sum as a linked list (You are not allowed to "cheat" and just
# convert the linked list to an integer)


from LinkedList import *

def sumLists(linked_list1, linked_list2):
	node1, node2 = linked_list1.head, linked_list2.head
	first_linkedlist, second_linkedlist = LinkedList(), LinkedList()
	while node1 or node2:
		next_node1 = node1.next 
	result_linkedlist = LinkedList()
	carry = 0
	while node1 or node2:
		result = carry
		if node1:
			result += node1.value
			node1 = node1.next
		if node2:
			result += node2.value
			node2 = node2.next
		result_linkedlist.add(result % 10)
		carry = result // 10
	if carry:
		result_linkedlist.add(carry)
	return result_linkedlist


linked_list1 = LinkedList()
linked_list1.generate(3, 0, 9)
linked_list2 = LinkedList()
linked_list2.generate(3, 0, 9)
print(linked_list1)
print(linked_list2)
print(sumLists(linked_list1, linked_list2))