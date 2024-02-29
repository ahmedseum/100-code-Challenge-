times = int(input())
for time in range(times):
    sentence = input()
    sentence = sentence.lower()
    count = 0
    for i in range(len(sentence)):
        if sentence[i] == "a" or sentence[i] == "e" or sentence[i] == "i" or sentence[i] == "u" or sentence[i] == " ":
            continue
        else:
            count += 1

    print(f"The number of Consonants in the sentence is : {count}")
