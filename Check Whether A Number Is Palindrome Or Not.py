# Check Whether A Number Is Palindrome Or Not...
num = int(input("Enter a number: "))
temp = num
total = 0
while temp > 0:
    rem = temp % 10
    total = (total * 10) + rem
    temp = temp // 10
if total == num:
    print(num, " is a palindrome number")
else:
    print(num, " is not a palindrome number")
