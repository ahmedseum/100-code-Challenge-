times=int(input())
for time in range(times):
    number=int(input())
    sum=0
    for i in range(1,number):
        if number%i==0:
            sum+=i
    if(sum==number):
        print(f"Yes, {number} is a Perfect Number!")
    else:
        print(f"No,{number} is not a Perfect Number!")
