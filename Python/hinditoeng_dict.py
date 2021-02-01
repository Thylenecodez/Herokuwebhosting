mydict = {
    "haath": "Hand",
    "dastaane": "Gloves",
    "pahaad" : "mountain"
}
print("You can choose from these :", mydict.keys())
a = input("Enter your Hindi word\n")
print("The meaning of your word is ", mydict.get(a))