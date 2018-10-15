def isprime(n):
    for i in range(2,int(n**0.5)+1):
        while n%i==0:
            k.append(i)
            print(i)
            n//=i
    if n>1:
        k.append(n)


ans=[]
for _ in range(int(input())):
    k=[]
    p=int(input())
    z=int(input())
    isprime(z)
    print(k)
    if k[-1]<=p:
        print("PSmooth",p)
    else:
        print("Not Smooth")
        
