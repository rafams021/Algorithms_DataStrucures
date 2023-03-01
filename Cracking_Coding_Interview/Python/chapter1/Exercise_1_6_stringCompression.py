# Exercise 1.6
# Implement a method to perform basic string compression using
# the counts of repeated characters. for example, the string
# aabccccaaa would become 2a1b4c3a. If the "compressed" string
# would not become smaller than the original string, your method 
# should return the original string. You can assume the string
# has only uppercase and lowercase letters (a-z)


def stringCompression(string_word):
	count = 0
	result = ''
	for i in range(len(string_word)):
		count +=1
		if i + 1 >= len(string_word) or string_word[i] != string_word[i + 1]:
			result += string_word[i] + str(count)
			count = 0
	return result if len(string_word) > len(result) else string_word


# Test cases
# Test case 1
word = 'aabccccaaa'
print(f"The result is : {stringCompression(word)}")

# Test case 2
word = 'aabccccaaad'
print(f"The result is : {stringCompression(word)}")

# Test case 3
word = ''
#print(f"The result is : {stringCompression(word)}")

# Test case 4
word = 'a'
#print(f"The result is : {stringCompression(word)}")

# Test case 5
word = 'abcde'
print(f"The result is : {stringCompression(word)}")