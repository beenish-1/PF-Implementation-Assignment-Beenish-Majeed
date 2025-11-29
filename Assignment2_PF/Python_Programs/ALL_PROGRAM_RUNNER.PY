# Output Preview Link:
# https://www.programiz.com/online-compiler/53eyRLCQZJBRu


# Assign values to three variables and print them
def Program_1():
    a,b,c=1,2,3
    print("values of a,b,c are: ",a,b,c)

#Print message: "C language is a powerful programming language"
def Program_2():
    print("C language is a powerful programming language")

#Swap values of two variables using assignment
def Program_3():
    a,b=1,2
    print("Before swapping: ",a,b)
    a,b=b,a
    print("After swapping:",a,b)
    
#Convert year to months and print
def Program_4():
    year=5
    months=year*12
    print("5 years in months is: ",months)

#Input two numbers, calculate sum and product, and print
def Program_5():
    num1=int(input("Enter first number: "))
    num2=int(input("Enter second number: "))
    sum=num1+num2
    product=num1*num2
    print("sum is: ",sum)
    print("product is: ",product)

#Input age in years, calculate age in months and print
def Program_6():
    years_age=int(input("Enter your age in years: "))
    months_age=years_age*12
    print("Your age in months is: ",months_age)

#Input student marks, calculate total and average
def Program_7():
    roll_no=int(input("Enter your roll number: "))
    sub1=int(input("Enter marks of Programming Fundamentals subject: "))
    sub2=int(input("Enter marks of Introduction to Computing subject: "))
    sub3=int(input("Enter marks of Computer Graphics subject:"))
    total=sub1+sub2+sub3
    average=total/3
    print("Roll number: ",roll_no)
    print("Total marks: ",total)
    print("Average marks: ",average)

#Convert Fahrenheit to Celsius and print
def Program_8():
    temp_f=float(input("Enter temperature in Fahrenheit: "))
    temp_c=(temp_f-32)*5/9
    print("Temprature in Celsius is: ",temp_c)

#Find the maximum number among four numbers
def Program_9():
    a, b, c, d=8, 12, 6, 4
    maximum = max(a, b, c, d)
    print("Maximum number is: ",maximum)

#Convert 2.5 miles to kilometers and print
def Program_10():
    miles=2.5
    kilometers=miles*1.609
    print("2.5 miles in kilometers is: ",kilometers)

#Calculate average of two integer variables
def Program_11():
    value1=int(10)
    value2=int(20)
    average=(value1+value2)/2.0
    print("Average of two numbers is: ",average)

#Find volume of a cylinder using const
def Program_12():
    import math
    pi=math.pi
    radius=float(input("Enter radius of cylinder: "))
    height=float(input("Enter height of cylinder: "))
    volume=pi*radius*radius*height
    print("Volume of cylinder is: ",volume)

#Calculate area of a circle using #define directive
def Program_13():
    pi=3.14
    radius=float(input("Enter radius of circle:"))
    area=pi*radius*radius
    print("Area of circle is: ",area)

#Convert millimeters to inches and print
def Program_14():
    mm=float(input("Enter length in millimeters: "))
    inches=mm/25.4
    print("Length in inches is: ",inches)

#Swap values of two variables
def Program_15():
    a,b=1,2
    print("Before swapping: ",a,b)
    a,b=b,a
    print("After swapping: ",a,b)

#Multiple assignment of a, b, c and calculate product
def Program_16():
    a=b=c=3
    product=a*b*c
    print("Product of a, b, c is: ",product)

#Separate integral and fractional parts of a real number
def Program_17():
    num=15.58971
    integral_part=int(num)
    fractional_part=num-integral_part
    print("Integral part is: ",integral_part)
    print("Fractional part is: ",fractional_part)

#Compute s using formula with variables vi and t
def Program_18():
    vi=34
    t=30
    s=vi*t+0.5*9.8*t*t
    print(s)

#Calculate age in months and days from age in years
def Program_19():
    age=18
    age_in_months=age*12
    age_in_days=age*365
    print("Age in months is: ",age_in_months)
    print("Age in days is: ",age_in_days)

#Print formatted output using escape sequences
def Program_20():
    print("C:\\Windows>")
    print("'P'\t'A'\t'K'")
    print("\"Pakistan\"")

#Print decreasing X pattern using '\n' escape sequence
def Program_21():
    print("XXXXX\nXXXX\nXXX\nXX\nX")

#Input and print student details (name, age, height, gender)
def Program_22():
    name=input("Enter your name: ")
    age=int(input("Enter your age: "))
    height=float(input("Enter your height: "))
    gender=input("Enter your gender: ")
    print("Name: ",name)
    print("Age: ",age)
    print("Height: ",height)
    print("Gender: ",gender)

#Input circle radius, calculate area and circumference
def Program_23():
    radius=float(input("Enter radius of circle: "))
    area=3.14*radius*radius
    circumference=2*3.14*radius
    print("Area of circle is: ",area)
    print("Circumference of circle is: ",circumference)

#Input marks of five subjects, calculate total and average
def Program_24():
    sub1=int(input("Enter marks of subject 1: "))
    sub2=int(input("Enter marks of subject 2: "))
    sub3=int(input("Enter marks of subject 3: "))
    sub4=int(input("Enter marks of subject 4: "))
    sub5=int(input("Enter marks of subject 5: "))
    total=sub1+sub2+sub3+sub4+sub5
    average=total/5
    print("Total marks is: ",total)
    print("Average marks is: ",average)

#Input three sides of triangle and calculate area using Heron’s formula
def Program_25():
    side1=float(input("Enter side 1 of triangle: "))
    side2=float(input("Enter side 2 of triangle: "))
    side3=float(input("Enter side 3 of triangle: "))
    s = (side1 + side2 + side3) / 2
    area = (s*(s-side1)*(s-side2)*(s-side3)) ** 0.5
    print('The area of the triangle is',area)

#Convert rupees to dollars
def Program_26():
    rupees=12000
    dollars=rupees/60
    print("12000 rupees in dollars is: ",dollars)

#Input time in hours, minutes, seconds and convert to seconds
def Program_27():
    hours=int(input("Enter hours: "))
    minutes=int(input("Enter minutes: "))
    seconds=int(input("Enter seconds: "))   
    time_in_seconds=hours*3600+minutes*60+seconds
    print("Time in seconds is: ",time_in_seconds)

#Compute discriminant using formula disc = b^2 - 4ac
def Program_28():
    a=int(input("Enter value of a: "))
    b=int(input("Enter value of b: "))
    c=int(input("Enter value of c: "))
    disc=b*b-4*a*c
    print("Discriminant is: ",disc) 

#Print message if variable n > 100
def Program_29():
    n=int(input("Enter value of n: "))
    if n>100:
        print("n is greater than 100")

#Check if a number is odd or even using if
def Program_30():
    num=int(input("Enter a number: "))
    if num%2==0:
        print("Number is even")
    else:
        print("Number is odd")

program={1:Program_1,2:Program_2,3:Program_3,4:Program_4,5:Program_5,6:Program_6,7:Program_7,8:Program_8,9:Program_9,10:Program_10,11:Program_11
         ,12:Program_12,13:Program_13,14:Program_14,15:Program_15,16:Program_16,17:Program_17,18:Program_18,19:Program_19,20:Program_20,21:Program_21
         ,22:Program_22,23:Program_23,24:Program_24,25:Program_25,26:Program_26,27:Program_27,28:Program_28,29:Program_29,30:Program_30}
choice = 'yes'
while choice.lower() == 'yes':
    choice_num = int(input("Enter the program number you want to run (1-30): "))
    if choice_num in program:
        program[choice_num]()
    else:
        print("Invalid choice")
        
    choice = input("Do you want to run another program? (yes/no): ")

print("Exit")

        