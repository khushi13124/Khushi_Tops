s=input("Enter string:")
d={}
for i in s:
    d[i]=s.count(i)

print("The count of each character is:")
for i in d:
    print(i,":",d[i])
