letter = '''Dear <|name|>,
you are selected!
Date : <|date|>'''

name = input("Enter your Name :\n")
date = input("Enter today's date\n")

letter = letter.replace("<|name|>",name)
letter = letter.replace("<|date|>",date)

print(letter)
