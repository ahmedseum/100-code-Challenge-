times=int(input())
for time in range(times):
    sentence=input()
    sentence=sentence.lower()
    for i in range(len(sentence)):
        print(ord(sentence[i])-96,end='')