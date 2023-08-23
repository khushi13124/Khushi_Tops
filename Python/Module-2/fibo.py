#Fibonacci
n=int(input("Enter number:"))
a,b=0,1
while b<n:
    print(a,end=" ")
    a,b=b,a+b
