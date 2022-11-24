a=int(input("Enter the number:"))
n=a
rev=0
while (n>0):
  rem = n%10
  rev=(rev*10)+rem
  n=n//10
if a==rev:
  print("IT IS A PALINDROME")
else:
  print("IT IS NOT A PALINDROME")
