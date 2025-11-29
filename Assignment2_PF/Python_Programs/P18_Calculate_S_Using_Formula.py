# Output Preview Link:
# https://www.programiz.com/online-compiler/9etsgDIgz84Hh


vi = float(input("Enter initial velocity (vi): "))
t = float(input("Enter time (t) in seconds: "))
a = float(input("Enter acceleration: "))

s = vi * t + 0.5 * a * t**2
print("Displacement (s) =", s)
