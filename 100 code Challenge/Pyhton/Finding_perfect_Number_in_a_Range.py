times=int(input())
for time in range(times):
    Range=int(input())
    for number in range(1,Range):
        sum=0
        for i in range(1,number):
            if number%i==0:
                sum+=i
        if(sum==number):
            print(number)
