from numpy import array 
t = int(input())
for _ in range(t):
    n = int(input())
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]
    a = array(a)
    b = array(b)
    a = a*20
    b = b*10
    c = a-b
    mxc = max(c)
    if mxc<0:
        print(0)
    else:print(mxc)
