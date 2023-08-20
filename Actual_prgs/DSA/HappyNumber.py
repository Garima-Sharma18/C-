n = 19
sm = 0
while n>1:
    num = n
    while (num>0):
        sm += pow(num%10,2)
        num = n//10
    n = sm
    print(n)