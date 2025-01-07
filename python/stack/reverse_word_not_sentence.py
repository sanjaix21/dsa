my_str = input().split(" ")
my_list = []
for words in my_str[::-1]:
    my_list.append(words[::-1])
while my_list:
    print(my_list.pop(), end = ' ')
print()
