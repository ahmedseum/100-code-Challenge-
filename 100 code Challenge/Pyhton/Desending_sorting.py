time = int(input())
for i in range(time):
    numbers = input()
    numbers = numbers.split(" ")
    for j in range(0, len(numbers)):
        currentNumber = j
        for k in range(j + 1, len(numbers)):
            if numbers[currentNumber] > numbers[k]:
                currentNumber = k
        temp = numbers[j]
        numbers[j] = numbers[currentNumber]
        numbers[currentNumber] = temp
print(numbers)
