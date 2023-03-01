# Exercise 2.2
# Implement an algorithm to find the kth to last element of
# a singly linked list.

from LinkedList import LinkedList

# Pointers solution
def returnKTHtoLast(linked_list, number):
	if linked_list.head == None:
		return None
	pointer = linked_list.head
	target_node = pointer
	for i in range(number):
		if pointer == None:
			return None
		pointer = pointer.next

	while pointer:
		pointer = pointer.next
		target_node = target_node.next

	return target_node


linked_list = LinkedList()
linked_list.generate(20, 0, 9)
print(linked_list)
print(returnKTHtoLast(linked_list, 3))

