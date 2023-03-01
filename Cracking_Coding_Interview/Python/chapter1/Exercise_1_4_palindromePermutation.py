# Exercise 4
# Given a string, write a funtion to check if it is a permutation of
# a palindrome. A palindrome is a word or a phrase that is the same
# forwards and backwards. A permutation is a rearrangement of letters.
# The palindrome does not need to be limited to just dictionary words.
# You can ignore casing and non-letter characters.

# Method that check all values in the hash map and return true if the word is a palindrome
# Loop into the values in the hash map, if there is more than one single letter return 
# false because it is not a palindrome, otherwise return true.
def palindromePermutation(word):
	hash_map = countLetters(word.replace(" ", ""))
	count = 0
	for value in hash_map.values():
		if value % 2 != 0:
			count += 1
			if count > 1:
				return False
	return True

# Method that return a hash map with the letters of the input word
# as keys and count letters as values
# Example:
# word = racecar
# hash_map = {
#	r: 2
#	a: 2
#	c: 2
#	e: 1
#}
def countLetters(word):
	hash_map = {}
	for i in range(len(word)):
		hash_map[word[i]] = 1 + hash_map.get(word[i], 0)
	return hash_map


# Test cases
# Test case 1
# Palindrome word
word1 = 'racecar'
print(f"The result is: {palindromePermutation(word1)}")

# Test case 2
# Not a palindrome word
word2 = 'racecaro'
print(f"The result is: {palindromePermutation(word2)}")

# Test case 3
# Is a palindrome
word3 = 'aaa'
print(f"The result is: {palindromePermutation(word3)}")

# Test case 4
# Is a palindrome
word4 = 'tact coa'
print(f"The result is: {palindromePermutation(word4)}")