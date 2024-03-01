times = int(input())
for time in range(times):
    word = input()
    reverse_word = ''.join([word[i] for i in range(len(word)-1, -1, -1)])
    if reverse_word == word:
        print(f"The word '{word}' is a polindrome word")
    else:
        print(f"The word '{word}' is not polindrome word")
