n=int(input("Enter the limit:"))
a=0
b=1
if n==2:
  print("",a,"\n",b)
elif n==1:
  print("",a)
elif n > 2:
  print("",a,"\n",b)
  for i in range(2,n):
    c= a + b
    a=b
    b=c
    print("",c)