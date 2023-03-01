# Exercise 1.2
# Given two string, write a method that decide if one is 
# permutation of the other.

# We are going to assume that the strings can have white spaces and
# can have also capital letters.

# Brute force solution:
# We will check the lenght of the string if it is different return 
# False, otherwise we will sort the strings and compare each other
# if they are the same return True, otherwise False
def permutation(word1, word2):
	if len(word1) != len(word2):
		return False

	if sorted(word1) == sorted(word2):
		return True

	return False


# Optimal solution using Hash Maps
# Check if the length of the strings are different and return False if they 
# are, if not the approach is to count the the letter in the string.
# Example:
# word1 = dog
# dic_word1 = {
#	d: 1
#	o: 1
#	g: 1
#}
# Create hash map and loop into the string, check if the letter is in the
# hash map as key, if it is sum the value of the key plus 1, if not append
# the letter to the hash map as key and add a 1. return True if keys and 
# values are the same both hash maps.
def permutation2(word1, word2):
	if len(word1) != len(word2):
		return False
	dict_word1, dict_word2 = {}, {}
	for i in range(len(word1)):
		dict_word1[word1[i]] = 1 + dict_word1.get(word1[i], 0)
		dict_word2[word2[i]] = 1 + dict_word2.get(word2[i], 0)
		print(dict_word2)
	return dict_word1 == dict_word2


# Test cases

# Test case 1
# Valid permutation
test_case_1_1 = 'dog'
test_case_1_2 = 'god'
print(f"Brute force solution: {permutation(test_case_1_1, test_case_1_2)}")
print(f"Optimal solution: {permutation2(test_case_1_1, test_case_1_2)}\n")

# Test case 2
# Not a permutation
test_case_2_1 = 'cat'
test_case_2_2 = 'god'
print(f"Brute force solution: {permutation(test_case_2_1, test_case_2_2)}")
print(f"Optimal solution: {permutation2(test_case_2_1, test_case_2_2)}\n")

# Test case 3
# No string in 1
test_case_3_1 = ''
test_case_3_2 = 'god'
print(f"Brute force solution: {permutation(test_case_3_1, test_case_3_2)}")
print(f"Optimal solution: {permutation2(test_case_3_1, test_case_3_2)}\n")

# Test case 4
# No string in 2
test_case_4_1 = ''
test_case_4_2 = ''
print(f"Brute force solution: {permutation(test_case_4_1, test_case_4_2)}")
print(f"Optimal solution: {permutation2(test_case_4_1, test_case_4_2)}\n")

# Test case 5
# diferent length
test_case_5_1 = 'dog'
test_case_5_2 = 'godofwar'
print(f"Brute force solution: {permutation(test_case_5_1, test_case_5_2)}")
print(f"Optimal solution: {permutation2(test_case_5_1, test_case_5_2)}\n")