def factorial(n):
    fac=1
    for i in range(1,n+1):
        fac*=i
    return fac

times=int(input())
for time in range(times):
    number=int(input())
    sum=0
    for i in range(1,number+1):
        sum+=(i/factorial(i))
    print(round(sum,4))
