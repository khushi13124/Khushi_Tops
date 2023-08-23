s1=input("Enter string 1:")
s2=input("Enter string 2:")
L1=[]
L2=[]
for i in s1:
    L1.append(i)
for i in s2:
    L2.append(i)
L1[0],L1[1]=L1[1],L1[0]
L2[0],L2[1]=L2[1],L2[0]
s1="".join(L1)
s2="".join(L2)
s=s1+" "+s2
print("New string:",s)
