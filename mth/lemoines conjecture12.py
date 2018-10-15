def isprime(n):
    if n==1:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True



def lemo(n):
    for i in range(1,n//2+1):
        var=n-i*2
        if isprime(i) and isprime(var):
            print("2 *",i,"+",var)

lemo(37)
        
