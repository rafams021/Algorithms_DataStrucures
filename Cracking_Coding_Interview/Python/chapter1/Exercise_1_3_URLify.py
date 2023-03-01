# Exercise 1.3
# Write a method to replace all spaces in a string with '%20'.
# You may assume that the string has sufficient space at the 
# end to hold aditional characters, and that you are given the 
# "true" legth of the string.
# Example:
# Input:
# "Mr Arreola Ulises        ", 17
# Output:
# "Mr%20Arreola%20Ulises"

# Replace first the number of spaces with '%20', between the words in
# the string, finally delete the remaning empty spaces.
def urlify(word, number):
	number_of_spaces = count(word, number, ' ')
	pre_result = word.replace(' ', '%20', number_of_spaces)
	final_result = pre_result.replace(' ', '')
	return final_result

# Count the number of spaces between 0 and the length of the string
def count(word, number, target):
	count = 0
	for i in range(number):
		if word[i] == target:
			count += 1
	return count


# Test cases
# Test case 1
test_word1 = 'Mr Arreola Ulises        '
test_number1 = 17
print(f"urlify is: {urlify(test_word1, test_number1)}")

# Test case 2
test_word2 = 'Mr Rafael Monje        '
test_number2 = 15
print(f"urlify is: {urlify(test_word2, test_number2)}")

# Test case 3
test_word3 = 'Mrs Maria Fernanda Martinez        '
test_number3 = 27
print(f"urlify is: {urlify(test_word3, test_number3)}")

