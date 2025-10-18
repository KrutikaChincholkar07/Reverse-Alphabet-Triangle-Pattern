ch = input("Enter an uppercase letter: ").upper()
n = ord(ch) - ord('A') + 1  # convert letter to number (A=1, B=2, ...)

for i in range(n):
    for j in range(ord(ch) - i, ord(ch) + 1):
        print(chr(j), end=" ")
    print()
