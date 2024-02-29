Times=int(input())
for time in range(Times):
    sentence= input()
    count=1
    for i in range(len(sentence)):
        if sentence[i]==" ":
            count+=1
    print(f"Number of words in the Sentence is {count}")