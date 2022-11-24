def collinear(x1,x2,x3,y1,y2,y3):
    a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)
    if a==0:
        print("The points are collinear")
    else:
        print("The points are not collinear")
x1=int(input("Enter the value of x1:"))
y1=int(input("Enter the value of y1:"))
x2=int(input("Enter the value of x2:"))
y2=int(input("Enter the value of y2:"))
x3=int(input("Enter the value of x3:"))
y3=int(input("Enter the value of y3:"))
collinear(x1,x2,x3,y1,y2,y3)
