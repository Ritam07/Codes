year=int(input("Enter the year:"))
if((year % 400 == 0) or (year % 100 != 0) and (year % 4 == 0)):   
    print("Given Year is a leap Year");  
else:
    print("Given year is not a leap year")