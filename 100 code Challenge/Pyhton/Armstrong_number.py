times=int(input())
for time in range(times):
    numbers= input()
    length=len(numbers)
    sum=0
    for i in range(length):
        sum+=pow(int(numbers[i]),length)
    if sum==int(numbers):
        print(f"{sum} is an armstrong number!")
    else:
        print(f"{sum} is not an armstrong number!")