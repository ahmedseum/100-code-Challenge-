time = int(input())
for i in range(time):
    number = input()
    count = False
    for j in range(0, 9, 2):
        if int(number[len(number) - 1]) == j:
            count = True
            break
        else:
            count = False
    if count:
        print("The number is Ever.")
    else:
        print("The number is Odd.")