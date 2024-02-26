times=int(input())
for time in range(times):
    sentence=input()
    character=input()
    count=0
    for i in range(len(sentence)):
        if(sentence[i]==character):
            count+=1
    if count>0:
        print(f"Occurence of '{character}' in '{sentence}' = {count}")
    else:print(f"'{character}' is not present")