times = int(input())
for time in range(times):
    starting = int(input())
    ending = int(input())
    if starting > ending:
        print("invalid")
        break
    for i in range(1,ending + 1):
        if (starting * i) <= ending:
            print(starting * i)
