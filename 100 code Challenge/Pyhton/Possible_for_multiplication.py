times = int(input())
for time in range(times):
    sLimit = int(input())
    eLimit = int(input())
    number = int(input())
    for limit in range(0, eLimit + 1,number):
        if limit >=sLimit and limit<=eLimit:
            print(limit)