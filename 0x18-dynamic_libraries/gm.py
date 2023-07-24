#!/usr/bin/env python3

import random

def main():
    numbers = []
    for i in range(5):
        number = random.randint(1, 75)
        while number in numbers:
            number = random.randint(1, 75)
        numbers.append(number)
    bonus_number = random.randint(1, 15)
    print("Your numbers are:", numbers, bonus_number)

if __name__ == "__main__":
    main()

