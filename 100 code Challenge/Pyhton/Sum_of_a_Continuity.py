times=int(input())
for time in range(times):
    number,power=input().split()
    sum=0
    for i in range(int(power)+1):
        sum+=pow(int(number),i)
    print(f"The Result is : {sum}")