#!/usr/bin/python3
def is_palindrome(number):
    return str(number) == str(number)[::-1]

def largest_palindrome():
    largest_palindrome = 0

    for num1 in range(100, 1000):
        for num2 in range(100, 1000):
            product = num1 * num2
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

result = largest_palindrome()

# Save the result in the file '102-result'
with open('102-result', 'w') as file:
    file.write(str(result))
