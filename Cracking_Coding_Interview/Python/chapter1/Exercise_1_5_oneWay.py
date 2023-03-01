# Exercise 1.5
# There are three types of edits that can be performed on strings:
# Insert a character, remove a character, or replace a character.
# Given two strings, write a function to check if they are one 
# edit away.
# Example:
# 'pale', 'bale'  -> True
# 'pale', 'ple'   -> True
# 'pale', 'pales' -> True
# 'pale', 'bake'  -> False

def oneWay(word1, word2):
	if len(word1) - len(word2) > 1 or len(word1) - len(word2) < -1:
		return False
	list_values1 = count_characters(word1)
	list_values2 = count_characters(word2)
	count = count_differences(list_values1, list_values2)
	if count < 1:
		return "The strings are the same"
	elif count > 2:
		return False
	return True


def count_characters(word):
	result = [0] * 128
	for letter in word:
		value = ord(letter)
		result[value] += 1
	return result


def count_differences(list_values1, list_values2):
	count = 0
	if list_values1 == list_values2:
		return -1
	for i in range(len(list_values1)):
		if list_values1[i] != list_values2[i]:
			count += 1
	return count


# Test cases
# Test case 1
# Replace 1 character
word1 = 'pale'
word2 = 'bale'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")

# Test case 2
# Remove 1 character
word1 = 'pale'
word2 = 'ple'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")

# Test case 3
# Insert 1 character
word1 = 'pale'
word2 = 'pales'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")

# Test case 4
# Replace 2 character
word1 = 'pale'
word2 = 'bake'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")

# Test case 5
# String the same
word1 = 'pale'
word2 = 'pale'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")

# Test case 5
# String the same
word1 = 'pale'
word2 = 'palesa'
print(f"The result for {word1} and {word2} is: {oneWay(word1, word2)}")