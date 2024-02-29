times = int(input())
for time in range(times):
    string_Input=input()
    start=end=0
    for i in range(len(string_Input)):
        if string_Input[i] == " " or i+1 == len(string_Input):
            end=i
            for k in range(end, start-1, -1):
                if string_Input[k]!=" ":
                    print(string_Input[k],end='')
                    start = i + 1
                else:
                    continue
            print(" ", end='')
