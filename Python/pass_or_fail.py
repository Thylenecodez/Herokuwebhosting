s1 = int(input("Enter your marks in Subject 1\n"))
s2 = int(input("Enter your marks in Subject 2\n"))
s3 = int(input("Enter your marks in Subject 3\n"))

sum = s1+s2+s3

if((sum/3)>40 and s1>33 and s2>33 and s3>33):
    print("You're Pass")
else:
    print("You're fail")