times=int(input())
for time in range(times):
    sLimt=int(input())
    number = int(input())
    elimit=int(input())
    for i in range(sLimt,elimit+1):
        if i % number==0:
            print(i)
