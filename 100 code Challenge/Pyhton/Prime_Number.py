times=int(input())
for time in range(times):
    start=int(input())
    end=int(input())
    main_count=0
    number_of_Prime_number=0
    for i in range(start,end+1):
        for k in range(1,i):
            if i%k==0:
                main_count+=1
        if main_count==1:
            number_of_Prime_number+=1
            main_count=0
        else:
            main_count=0
    print(number_of_Prime_number)