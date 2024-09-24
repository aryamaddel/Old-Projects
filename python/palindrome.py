# ||||||||||||||||||||||||||||||||
# value = input('Enter a value: ')
# print(value == value[::-1])
# ||||||||||||||||||||||||||||||||




def palindrome(value):
    value_copy = value
    reverse_value = 0
    while value_copy > 0:
        reverse_value = reverse_value*10 + value_copy % 10
        value_copy = value_copy//10
    return reverse_value == value

print(palindrome(121))