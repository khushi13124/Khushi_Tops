def slist():
    L=[]
    size=1
    n=int(input("How many words you want to enter?"))
    for i in range(n):
        x=input("Enter word:")
        L.append(x)
    for i in L:
        if len(i)>size:
            size=len(i)
    return size

print("Length of longest word is:",slist())
