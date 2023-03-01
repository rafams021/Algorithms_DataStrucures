# Excersie 1.1
# Is Unique
# Implement an algorithm to determine if a string has all
# unique characters. what if you can not use additional 
# data structures?

# First we will assume that the character are in ASCCI
# The length of ASCCI is 128 characters
# Our input will be a string or a list of character
# The output will be True if all characters are unique or
# False otherwise
# Example:
# Input:
# "abcdef"
# Output:
# True
# "abcdde"
# False


def isUnique(word):
	# Brute force solution
	# if the length of the string = 0 or > 128
	# The list is empty or there are duplicate 
	# characters in the string, return false
	if len(word) == 0 or len(word) > 128:
		return False
	# Iterate throgh all the string if the character
	# in position - 1 is the same as the character
	# in the current position, then return False
	# return True otherwise
	for i in range(1, len(word)):
		if word[i - 1] == word[i]:
			return False
	return True


def isUnique2(word):
	# Optimal solution
	# if the length of the string = 0 or > 128
	# The list is empty or there are duplicate 
	# characters in the string, return false
	if len(word) == 0 or len(word) > 128:
		return False
	# Creat a list of 0, representing the 128 characters in the ASCII
	count = [0] * 128
	# Loop into the sting
	for letter in word:
		value = ord(letter)
		if count[value]:
			return False
		count[value] = 1
	return True


# Test case 1
# All letters are different
test_case1 = "abcdef"
print(f"Brute force solution: {isUnique(test_case1)}")
print(f"Optimal solution: {isUnique2(test_case1)}\n")
# Test case 2
# Letter repeted
test_case2 = "abcddef"
print(f"Brute force solution: {isUnique(test_case2)}")
print(f"Optimal solution: {isUnique2(test_case2)}\n")
# Test case 3
# Empty list
test_case3 = []
print(f"Brute force solution: {isUnique(test_case3)}")
print(f"Optimal solution: {isUnique2(test_case3)}\n")
# Test case 4
# Length of the list > 128
test_case4 =  "aaaaaaaaaaaaaa\
			   aaaaaaaaaaabbb\
			   bbbbbbbbbbbbbb\
			   cccccccccccccc\
			   cccddddddddddd\
			   dddddddeeeeeee\
			   ffffffffffffff\
			   gggggggggggggg\
			   ggggggghhhhhhh\
			   iiiiiiiiiiijjj\
			   jjkkkkkkkkkkkk"
print(f"Brute force solution: {isUnique(test_case4)}")
print(f"Optimal solution: {isUnique2(test_case4)}")
