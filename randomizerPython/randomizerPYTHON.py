"""
    Randomly shuffle an list provided as input by the user
    Uses the Mercenne Twister algorithm as the PRNG
"""
import random
import os

# Taking user input
N = int(input("No. of entries: "))

lst = []
for i in range(0, N):
    ele = input("Entry no. " + str(i+1) + ": ")

    lst.append(ele)

print("\nInput list:")
print(lst)

# Randomize the list
random.seed(os.urandom(2))
random.shuffle(lst)

# Output the random list
print("\nRandomized output:")
print(lst)
print("\n")
