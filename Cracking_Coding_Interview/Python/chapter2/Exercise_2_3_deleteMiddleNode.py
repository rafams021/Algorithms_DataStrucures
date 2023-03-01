# Exercise 2.3
# Implement an algorithm to delete a node in the middle (i.e., 
# any node but the first and last node, not necessarily the 
# exact middle) of a singly linked list, given the only access 
# to that node.

from LinkedList import LinkedList

def deleteMiddleNode(node):
	if node.next == None or node.value == None:
		return False
	node.value = node.next.value
	node.next = node.next.next


linked_list = LinkedList()
linked_list.add_multiple([1, 2, 3, 4])
middle_node = linked_list.add(5)
linked_list.add_multiple([7, 8, 9])
print(linked_list)
deleteMiddleNode(middle_node)
print(linked_list)