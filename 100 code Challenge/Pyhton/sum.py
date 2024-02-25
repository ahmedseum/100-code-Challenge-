times = int(input())
for i in range(times):
    numbers = input()
    sum = 0
    for j in range(len(numbers)):
        sum += int(numbers[j])
    print(sum)
