major=[]
def SieveE(n):
    prime=[True for i in range(n+1)]
    p=2
    while p*p<=n:
        if prime[p]:
            for i in range(p*p,n,p):
                prime[i]=False
        p+=1
    for i in range(2,n):
        if prime[i]:
            major.append(i)

SieveE(10**3)
#print(*major)

for _ in range(int(input())):
    l=_
    f=0
    if l%2!=0 and l>5:
        s=0
        for i in major[:50]:
            for j in major[:50]:
                if (i+2*j)==l:
                    print("Found",l,"sol",i,"+( 2 *",j,")")
                    f=1
    else:
        print("Not Entertained")
