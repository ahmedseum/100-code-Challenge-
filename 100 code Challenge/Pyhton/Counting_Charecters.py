times = int(input())
for time in range(times):
    counting_array=[0 for i in range(26)]
    sentence = input()
    for i in range(len(sentence)):
        if sentence[i]>='a' and sentence[i]<='z':
            counting_array[ord(sentence[i])-ord('a')]+=1
    for i in range(26):
        if counting_array[i] ==0:
            continue
        else:
            print(f"{chr(97 + i)} = {counting_array[i]}")
