def isprime(n):
    k=[]
    for i in range(2,int(n**0.5)+1):
        while n%i==0:
            k.append(i)
            n//=i
    if n>1:
        k.append(n)
    k.sort()
    return k[0]
    

z=int(input())
p=[]
i=2
c=0
k1=int(input())
while True:
        if isprime(i)>=k1:
            c+=1
            p.append(i)
            if c==z:
                break
        i+=1
print(p)
