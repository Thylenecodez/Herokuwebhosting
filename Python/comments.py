text = input("Enter your comment\n")

if("make a lot of money"in text):
    spam = True
elif("buy this"in text):
    spam = True
elif("subscribe this"in text):
    spam = True
if("click this"in text):
    spam = True
else:
    spam = False

if(spam):
    print("This comment is a spam")
else:
    print("This comment is not a spam")