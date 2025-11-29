# Output Preview Link:
# https://www.programiz.com/online-compiler/22kQ5K7yDfXog

roll_no = input("Enter Roll No: ")

marks_PF = int(input("Enter marks for Programming Fundamentals (out of 100): "))
marks_IC = int(input("Enter marks for Introduction to Computing (out of 100): "))
marks_CG = int(input("Enter marks for Computer Graphics (out of 100): "))

total = marks_PF + marks_IC + marks_CG
average = total / 3.0

print("\nRoll No:", roll_no)
print("Total Marks:", total)
print("Average Marks:", round(average, 2))
