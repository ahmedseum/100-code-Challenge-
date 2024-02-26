time = int(input())
for repeat in range(time):
    number = int(input())
    factorial = 1;
    for i in range(1, number + 1):
        factorial *= i
    count=0
    current_Number=str(factorial)
    for i in range(len(current_Number)-1,0,-1):
        if(current_Number[i]=='0'):
            count+=1
        else:
            print(count)
            break

#while(calculation==0):
 #   calculation = number%10
  #  if calculation==0:
   #     count++
    #number=number/10
