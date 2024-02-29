times=int(input())
for time in range(times):
    food=int(input())
    count=0
    while food>1:
        food/=2
        count+=1
    print(f"{count} days")