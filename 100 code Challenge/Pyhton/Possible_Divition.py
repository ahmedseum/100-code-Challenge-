time=int(input())
for i in range(time):
    number=int(input())
    for j in range (1,number+1):
        if number%j==0:
            print(j,end=" ")