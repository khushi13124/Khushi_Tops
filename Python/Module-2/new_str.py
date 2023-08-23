s=input("Enter string:")
if len(s)>=2:
    s=s[0:2]+s[-2::1]
    print("New string:",s)
else:
    print("Empty String")
