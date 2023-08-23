def insert():
    s=input("Enter string:")
    ss=input("Enter substring:")
    x=len(s)//2
    s=s[0:x]+ss+s[x:]
    print("New string:",s)

insert()
