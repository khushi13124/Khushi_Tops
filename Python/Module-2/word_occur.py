s=input("Enter sentence:")
L=s.split(" ")
d={}
for i in L:
    d[i]=L.count(i)
for i in d:
    print(i,": ",d[i])
