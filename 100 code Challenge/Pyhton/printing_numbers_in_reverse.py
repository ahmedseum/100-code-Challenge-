times=int(input())
for time in range(times):
    number=int(input())
    number=str(number)
    number=''.join([number[i] for i in range(len(number)-1,-1,-1)])
    number=int(number)
    print(number)

