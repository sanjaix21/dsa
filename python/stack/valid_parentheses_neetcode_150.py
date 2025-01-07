my_str = input()
opening = []
is_valid = True
for ch in my_str:
    if ch in "({[":
        opening.append(ch)
    elif ch in ")}]":
        if not opening:
            is_valid = False
            break
        top = opening.pop()
        if (ch == ')' and top != '(') or (ch == '}' and top != '{') or (ch == '[' and top != ']'):
            is_valid = False
        
    else:
        is_valid = False

print("The string is", is_valid and not opening)

