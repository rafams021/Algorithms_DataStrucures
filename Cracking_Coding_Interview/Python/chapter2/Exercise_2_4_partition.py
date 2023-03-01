# Exercise 2.4

# Write code to partition a linked list around a value x such that all nodes 
# less than x come before all nodes greater than or equal tox. (IMPORTANT:
# The partition element x can appear anywhere in the "right partition"; it 
# does not need to appear between the left and right partitions. The additional
# spacing in the example below indicates the partition. Yes, the ouput below is
# one of many valid outputs!)


from LinkedList import *

def partition(linked_list, pointer):
	head_node = linked_list.head
	result_linked_list = LinkedList()
	list_right, list_left = [], []
	while head_node:
		next_node = head_node.next
		if head_node.value < pointer:
			list_left.append(head_node.value)
		else:
			list_right.append(head_node.value)
		head_node = next_node
	for value in list_right:
		list_left.append(value)
	result_linked_list.add_multiple(list_left)
	return result_linked_list

def partition2(ll, x):
	current = ll.tail = ll.head
	while current:
		nextNode = current.next
		current.next = None
		#print(f"Current next = {current.next}, linked_list nex = {linked_list.next}")
		if current.value < x:
			current.next = ll.head
			ll.head = current
		else:
			ll.tail.next = current
			ll.tail = current
		current = nextNode
	if ll.tail.next is not None:
		ll.tail.next = None


linked_list = LinkedList()
linked_list.generate(10, 0, 9)
print(linked_list)
print(partition(linked_list, 5))
partition2(linked_list, 5)
print(linked_list)