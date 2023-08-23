s=input("Enter string:")
x=s.find("not")
z=s.find("poor")
if x<z:
    s=s.replace(s[x:z+4],'good')
print("New string:",s)
