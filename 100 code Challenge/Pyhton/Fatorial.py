time = int(input())
for repeat in range(time):
    number = int(input())
    factorial = 1;
    for i in range(1, number + 1):
        factorial *= i
    print(factorial, end=" ")
