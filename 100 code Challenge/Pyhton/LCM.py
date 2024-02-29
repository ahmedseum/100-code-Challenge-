times=int(input())
for time in range(times):
    number1=int(input())
    number2=int(input())
    final_result=0
    if number1>number2:
        temp=number1
        number1=number2
        number2=temp
    for i in range(number1,1,-1):
        if number1%i==0 and number2%i==0:
            result1=number1/i
            result2=number2/i
            final_result=result1*result2*i
            break
    print(f"LCM is : {final_result}")