s=input("Enter string:")
if len(s)>=3:
    if s[-4::1]=='ing':
        s=s+'ly'
    else:
        s=s+'ing'
print("New string:",s)
