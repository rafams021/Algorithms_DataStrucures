# Exercise 2.1
# write a code to remove duplicates form unsorted linked list.
# Example:
# Input
# 0 -> 0 -> 5 -> 7 -> 5 -> 5 -> 2 -> 1 -> 0 -> 3 -> 1 -> 4 -> 6 -> 3 -> 0
# Output
# 0 -> 5 -> 7 -> 2 -> 1 -> 3 -> 4 -> 6

from LinkedList import LinkedList


def remove_duplicate(linked_list):
	if linked_list.head is None:
		return None
	current_node = linked_list.head
	value_seen = {current_node.value}
	while current_node.next:
		if current_node.next.value in value_seen:
			current_node.next = current_node.next.next
		else:
			value_seen.add(current_node.next.value)
			current_node = current_node.next
	return linked_list

linked_list = LinkedList()
linked_list.generate(15, 0, 9)
print(linked_list)
print(remove_duplicate(linked_list))
