import math

time = int(input())
for number_of_input in range(time):
    number = int(input())
    result = math.sqrt(number)
    if result%int(result)==0:
        print("YES")
    else:
        print("NO")
