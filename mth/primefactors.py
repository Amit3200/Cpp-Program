def isprime(n):
    for i in range(2,int(n**0.5)+1):
        while n%i==0:
            print(i)
            n//=i
    if n>1:
        print(n)

for _ in range(int(input())):
    z=int(input())
    isprime(z)
