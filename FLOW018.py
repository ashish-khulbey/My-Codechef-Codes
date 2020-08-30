# Problem Link : https://www.codechef.com/problems/FLOW018

t = int(input())
while t>0:
    n = int(input())
    ans = 1;
    for i in range(1, n+1):
        ans *= i
    print(ans)
    t=t-1
