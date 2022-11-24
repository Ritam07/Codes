p=int(input("Enter the principle amount:"))
t=int(input("Enter the number of years:"))
r=int(input("Enter the rate of interest:"))
n=int(input("Number of times interest applied per time period:"))
a=(p*((1+(r/n))**(n*t)))-p
print("The compound interest is:",a)