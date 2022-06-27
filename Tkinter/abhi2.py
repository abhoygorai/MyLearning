str1 = ""
for row in range(7):
    for col in range(5):
        if(col == 0 or col == 4) or ((row == 0 or row == 3) and (col > 0 and col < 4)):
            str1 = str1+"*"
        else:
            str1 = str1+" "
    str1 = str1+"\n"

print(str1)
